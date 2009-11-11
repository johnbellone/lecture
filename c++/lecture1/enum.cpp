// Copyright (C) 2009 jvb4@njit.edu
#include <cstdio>

enum {
	NOTYPE_ENUM_ZERO = 0,
	NOTYPE_ENUM_ONE,
	NOTYPE_ENUM_TWO,
	NOTYPE_ENUM_THREE,

	/******************/
	NOTYPE_ENUM_MAX
};

typedef enum {
	TYPE_ENUM_ZERO = 0,
	TYPE_ENUM_ONE,
	TYPE_ENUM_TWO,
	TYPE_ENUM_THREE,

	/*****************/
	TYPE_ENUM_MAX
} TypeEnum;

void
WriteTypeEnum (TypeEnum value) {
	if (value == TYPE_ENUM_ZERO) {
		printf ("%-2d%-2d%-2d%-2d%-2d\n",
				  TYPE_ENUM_ZERO,
				  TYPE_ENUM_ONE,
				  TYPE_ENUM_TWO,
				  TYPE_ENUM_THREE,
				  TYPE_ENUM_MAX);
	}
}

int
main (int argc, char * argv[]) {

	printf ("%-2d%-2d%-2d%-2d%-2d\n",
			  NOTYPE_ENUM_ZERO,
			  NOTYPE_ENUM_ONE,
			  NOTYPE_ENUM_TWO,
			  NOTYPE_ENUM_THREE,
			  NOTYPE_ENUM_MAX);

	WriteTypeEnum (TYPE_ENUM_ZERO);
	/*
	WriteTypeEnum (NOTYPE_ENUM_ZERO);
	WriteTypeEnum (0);
	*/
}
