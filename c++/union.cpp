// Example of using Union structure in C++
// jb@thunkbrightly.com
#include <iostream>
#include <cstdlib>

enum {X=0, Y=1, Z=2};

// Point in space.
typedef union {
	int axis[3];
	struct {
		int x;
		int y;
		int z;
	};
} Point;

// An IP Address.
typedef union {
	unsigned short octet[4];
	unsigned long value;
} IpAddress;

// Stream outputs.
std::ostream & operator<< (std::ostream & stream, const Point & pt) {
	stream << "(" << pt.x << "," << pt.y << "," << pt.z << ") ";
	return stream;
}

std::ostream & operator<< (std::ostream & stream, const IpAddress & addr) {
	stream << addr.value << "=["
			 << addr.octet[0] << "."
			 << addr.octet[1] << "."
			 << addr.octet[2] << "."
			 << addr.octet[3] << "] ";
	return stream;
}

int
main (int argc, char * argv[]) {
	Point origin; 
	Point i, j, k; 

	origin.axis[X] = origin.axis[Y] = origin.axis[Z] = 0;
	i.y = i.z = j.x = j.z = k.x = k.y = 0;
	i.axis[X] = j.axis[Y] = k.axis[Z] = 1;
	
	std::cout << "Origin: " << origin << "\n";
	std::cout << "i: " << i << "j: " << j << "k: " << k << "\n";
	
	IpAddress ip;
	ip.octet[0] = 192; ip.octet[1] = 168; ip.octet[2] = 1; ip.octet[3] = 1;
	
	std::cout << "IP: " << ip << "\n";
	
}
