#include <iostream>
#include <boost/thread.hpp>
#include <boost/date_time.hpp>

void
threadfunc (void) {
	boost::posix_time::seconds time_to_sleep (10);

	std::cout << "Waiting for timer...\n";

	boost::this_thread::sleep (time_to_sleep);

	std::cout << "Finished!\n";
}

int
main (int argc, char * argv[]) {

	std::cout << "Starting up in main...\n";

	boost::thread th (threadfunc);

	std::cout << "Waiting for threadfunc...\n";

	th.join();

	std::cout << "Done!\n";
		
}
