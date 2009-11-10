/* Copyright (C) 2009 jvb4@njit.edu */
#include <stdio.h>

int
main (int argc, char * argv[]) {
	int ii = 10;

	for (ii = 0; ii < 10; ii++)
		printf ("%-2d ", ii);
	printf ("\n");
	
	for (int ii = 0; ii < 10; ii++) 
		printf ("%-2d ", ii);
	printf ("\n");
	
}
