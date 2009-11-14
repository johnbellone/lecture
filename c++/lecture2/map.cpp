// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <cstdio>

class Count {
private:
	unsigned int value;
public:
	Count (void) {
		this->value = 0;
	}

	Count & operator++ (int) {
		this->value++;
		return *this;
	}
	
	friend std::ostream & operator<< (std::ostream & stream, const Count & ct) {
		stream << ct.value;
		return stream;
	}
};

class WordMap : public std::map<std::string,Count> {
public:
	friend std::ostream & operator<< (std::ostream & stream, const WordMap & cm) {
		for (WordMap::const_iterator it = cm.begin(); it != cm.end(); it++) {
			stream << it->first << " -> " << it->second << "\n";
		}
		return stream;
	}
};

int
main (int argc, char * argv[]) {
	std::string word;
	WordMap dict;
	int ch;

	while ((ch = getchar()) != EOF) {
		fflush (stdin);
		
		if ((ch == ' ') || (ch == '\n') || (ch == '\r')) {
			if (! word.empty())
				dict [word]++;

			word.clear();
			continue;
		}
				
		word.push_back (ch);
	}

	// Print out the mapping of all the words (and their occurrences) to the screen.
	std::cout << dict;
	
}
