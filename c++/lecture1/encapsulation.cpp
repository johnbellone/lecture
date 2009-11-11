// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>

class Person {
private:
	std::string name;
	unsigned int age;
public:
	Person (void) {
		this->name.clear();
		this->age = 0;
	}
	Person (const std::string & name, unsigned int age) {
		this->name = name;
		this->age = age;
	}
	
	inline const std::string & GetName (void) const { return this->name; }
	inline unsigned int GetAge (void) const { return this->age; }
	inline void SetName (const std::string & name) { this->name = name; }
	inline void SetAge (unsigned int age) { this->age = age; }

	inline friend std::ostream & operator<< (std::ostream & stream, const Person & p) {
		stream << "(Class): Name: "<< p.GetName() << " Age: " << p.GetAge();
		return stream;
	}
};

/*
std::ostream & operator<< (std::ostream & stream, const Person & p) {
	stream << "(Global) Name: " << p.GetName() << " Age: " << p.GetAge();
	return stream;
}
*/

int
main (int argc, char * argv[]) {
	Person blank;
	Person jacob = Person ("jacob", 10);
	Person diane ("diane", 12);
	
	std::cout << blank << "\n";

	std::cout << jacob << "\n";

	std::cout << diane << "\n";

	blank.SetAge (14);
	blank.SetName ("blank");

	std::cout << blank << "\n";
}
