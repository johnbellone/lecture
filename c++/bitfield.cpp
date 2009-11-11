// Copyright (C) 2009 jvb4@njit.edu
#include <iostream>

typedef struct {
	unsigned char x : 3;
	unsigned char y : 5;
} A;

typedef struct {
	unsigned char x;
	unsigned char y;
} B;

typedef struct {
	A x;
	unsigned char y : 5;
} C;

typedef struct {
	unsigned int x : 3;
	unsigned int y : 5;
} D;

typedef struct {
	unsigned int x : 3;
	unsigned char y : 5;
} E;

typedef struct {
	unsigned int x : 3;
	unsigned int y : 5;
	unsigned int z : 5;
} F;

typedef struct {
	unsigned int x : 3;
	unsigned int y : 5;
	unsigned int z;
} G;

int
main (int argc, char * argv[]) {
	std::cout << "Size of unsigned int: " << sizeof (unsigned int) << " bytes\n";
	std::cout << "Size of unsigned char: " << sizeof (unsigned char) << " bytes\n";
	std::cout << "Size of A: " << sizeof (A) << " bytes\n";
	std::cout << "Size of B: " << sizeof (B) << " bytes\n";
	std::cout << "Size of C: " << sizeof (C) << " bytes\n";
	std::cout << "Size of D: " << sizeof (D) << " bytes\n";
	std::cout << "Size of E: " << sizeof (E) << " bytes\n";
	std::cout << "Size of F: " << sizeof (F) << " bytes\n";
	std::cout << "Size of G: " << sizeof (G) << " bytes\n";
	
}
