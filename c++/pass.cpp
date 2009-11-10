// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>

void
by_reference (std::string & id) {
	std::cout << id << " ";
	id = "2";
}

void
by_const_reference (const std::string & id) {
	std::cout << id << " ";
}

void
by_pointer (std::string * id) {
	std::cout << *id << " ";
	*id = "3";
}

void
by_const_pointer (const std::string * id) {
	std::cout << *id << " ";
}

void
by_value (std::string id) {
	std::cout << id << " ";
	id = "1";
}

int
main (int argc, char * argv[]) {

	std::string id = "0";

	by_const_reference (id);
	by_value (id);
	by_reference (id);
	by_pointer (&id);
	by_const_pointer (&id);

	std::cout << "\n";
	
}
