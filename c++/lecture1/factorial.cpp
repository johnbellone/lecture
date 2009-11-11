#include <iostream>

template <unsigned long int N>
struct Factorial {
	static const unsigned long int value = N * Factorial <N - 1>::value;
};

template <>
struct Factorial<0> {
	static const unsigned long int value = 1;
};

template <>
struct Factorial<1> {
	static const unsigned long int value = 1;
};

unsigned long int
FactorialFunc (unsigned long int N) {
	return (N < 2) ? 1 : (N * FactorialFunc (N-1));
}

int
main (int argc, char * argv[]) {
	
	std::cout << Factorial<40>::value << "\n";

	std::cout << FactorialFunc (40) << "\n";

}

