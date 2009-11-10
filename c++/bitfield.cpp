// Example showing the use of Bitfields
// jb@thunkbrightly.com
#include <iostream>

typedef struct {
	int id : 3;
	char tag : 5;
} A;

typedef struct {
	int id;
	char tag;
} B;

typedef struct {
	A t1;
	unsigned char tag : 5;
} C; 

int
main (int argc, char * argv[]) {

	std::cout << "Size of unsigned int (bytes): " << sizeof (unsigned int) << "\n";
	std::cout << "Size of unsigned char (bytes): " << sizeof (unsigned char) << "\n";
	std::cout << "Size of A (bytes): " << sizeof (A) << "\n";
	std::cout << "Size of B (bytes): " << sizeof (B) << "\n";
	std::cout << "Size of C (bytes): " << sizeof (C) << "\n";
}
