// Example of using Goto and Labels
// jb@thunkbrightly.com
#include <iostream>
#include <string>

int
SomeRandomFunction (int & x) {
	x = 5;
	std::cout << x << " ";
}

/*
 * A sign that GOTO has been used usually means code was poorly planned out. But here are
 * two cases (one horrible, one not-as-bad) where they can be used. Again, never, ever, ever
 * use labels and goto.
 */
int
main (int argc, char * arg[]) {

	int x = 0;

	// This is the exact reason why GOTO and LABELS should not be used. Follow
	// the logic of the code below. Is it confusing?
	goto B;
 A: x = 1;
	std::cout << x << " ";
	SomeRandomFunction (x);
	goto C;
 B: x = 2;
	std::cout << x << " ";
	goto A;
 C: x = 3;
	std::cout << x << " ";
 D: x = 4;
	std::cout << x << " ";

	std::cout << "\n";

	// A less horrible use of GOTO.
	x = 0;
	while (x < 1000) {
		for (int y = 1000; y > x; y++) {
			std::cout << "x=" << x << ",y=" << y << " ";
			
			if ( (x/y) == 0 )
				goto END;
		}
	}
 END: std::cout << "\n";
	
}
