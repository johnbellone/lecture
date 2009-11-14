// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>
#include <sstream>

class Node {
private:
	int identifier;
public:
	Node (int id) {
		this->identifier = id;
	}

	inline int GetId (void) const { return this->identifier; }
	
	inline friend std::ostream & operator<< (std::ostream & stream, const Node * node) {
		stream << node->GetId() << " ";
		return stream;
	}
};

int
main (int argc, char * argv[]) {
	Node ** array = new Node* [11]; array[10] = NULL;
	
	for (int ii = 0; ii < 10; ii++) {
			array[ii] = new Node ( ii );
	}
	// base[ii]
	for (int ii = 0; ii < 10; ii++)
		std::cout << array[ii];
	std::cout << "\n";

	// base + index 
	for (int ii = 0; ii < 10; ii++) {
		std::cout << *(array + ii);
	}
	std::cout << "\n";

	// base++
	for (Node ** cursor = array; *cursor != NULL; cursor++)
		std::cout << *cursor;
	std::cout << "\n";
		
	for (int ii = 0; ii < 10; ii++)
		delete array[ii];
	delete [] array;
	
}
