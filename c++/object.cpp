// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>
#include <string>

class Noncopyable {
private:
	Noncopyable (const Noncopyable & nc);
	Noncopyable & operator= (const Noncopyable & nc);
public:
	Noncopyable (void) { }
};

class Object : public Noncopyable {
private:
	std::string value;
public:
	Object (void) {
		this->value.clear();
	}
	Object (const std::string & value) {
		this->value = value;
	}
};

int
main (int argc, char * argv[]) {
	Object a("a"), b("b");
	/*
	Object c(b);
	Object d;
	d = a;
	*/
}
