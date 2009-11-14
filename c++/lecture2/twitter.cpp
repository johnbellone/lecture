#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/date_time.hpp>
#include <curl/curl.h>
#include <string>

class Worker {
private:
	volatile bool is_running;
	boost::shared_ptr <boost::thread> thread;
	CURL * curl;
	std::string api_url;
public:
	Worker (const std::string & api_url) {
		this->is_running = false;
		this->curl = curl_easy_init();
		this->api_url = api_url;
		
		start();
	}

	~Worker (void) {
		curl_easy_cleanup (curl);
	}

	void start (void) {
		if (!is_running) {
			thread = boost::shared_ptr<boost::thread> (new boost::thread (boost::bind (&Worker::run, this)));
			is_running = true;
		}
	}

	void stop (void) {
		if (is_running) {
			is_running = false;
			thread->join();
		}
	}

	void run (void) {
		boost::posix_time::seconds time_to_wait (5);
		CURLcode res;
		
		while (is_running) {
			curl_easy_setopt (curl, CURLOPT_URL, this->api_url.c_str());

			res = curl_easy_perform (curl);
			
			boost::this_thread::sleep (time_to_wait);
		}
	}
};

int
main (int argc, char * argv[]) {
	boost::posix_time::seconds time_to_run (30);
	Worker trends ("http://search.twitter.com/trends/current.json");

	while (true) {
		boost::this_thread::sleep (time_to_run);
	}

	trends.stop();
}
