// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <vector>
#include <cstring>

typedef std::vector<int> IntVector;

class CharArray : public std::vector<char> {
public:
	CharArray (void) {
		std::vector<char>::clear();
	}
	CharArray (const char * str) {
		const char * c = str;

		while (*c) {
			std::vector<char>::push_back (*c);
			c++;
		}
	}
	friend std::ostream & operator<< (std::ostream & stream, CharArray & ca) {
		for (size_t ii = 0; ii < ca.size(); ii++)
			stream << ca[ii];
		return stream;
	}
};

std::ostream & operator<< (std::ostream & stream, IntVector & iv) {
	for (IntVector::iterator it = iv.begin(); it != iv.end(); it++)
		stream << *it << " ";
	return stream;
}

int
main (int argc, char * argv[]) {
	IntVector int_array;
	CharArray string ("The quick brown fox finally got a job.");

	for (int ii = 0; ii < 10; ii++)
		int_array.push_back(ii);

	for (int ii = 0; ii < 10; ii++) 
		std::cout << int_array[ii] << " ";
	std::cout << "\n";
	
	std::cout << int_array << "\n";
	std::cout << string << "\n";
			
}
