// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>

class Integer {
private:
	int value;
public:
	Integer (void) : value(0) { }
	Integer (int integer) : value(integer) { }
	Integer (const Integer & integer) {
		this->value = integer.value;
	}

	inline int GetValue (void) const { return this->value; }

	Integer & operator+= (const Integer & a) {
		this->value += a.GetValue();
		return *this;
	}

	Integer & operator-= (const Integer & a) {
		this->value -= a.GetValue();
		return *this;
	}

	friend Integer operator+ (const Integer & a, const Integer & b) {
		return (a.GetValue() + b.GetValue());
	}

	friend Integer operator- (const Integer & a, const Integer & b) {
		return (a.GetValue() - b.GetValue());
	}

	friend Integer operator* (const Integer & a, const Integer & b) {
		return (a.GetValue() * b.GetValue());
	}

	friend Integer operator/ (const Integer & a, const Integer & b) {
		return (a.GetValue() / b.GetValue());
	}
	
	friend std::ostream & operator<< (std::ostream & stream, const Integer & integer) {
		stream << integer.GetValue();
		return stream;
	}
};

int
main (int argc, char * argv[]) {
	Integer a = 10;
	Integer b = 12;

	std::cout << a << " + " << b << " = " << (a + b) << "\n";
	std::cout << a << " - " << b << " = " << (a - b) << "\n";
	std::cout << a << " * " << b << " = " << (a * b) << "\n";
	std::cout << a << " / " << b << " = " << (a / b) << "\n";
	
}
