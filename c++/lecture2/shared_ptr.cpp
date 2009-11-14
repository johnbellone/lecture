#include <iostream>
#include <tr1/memory>

class Unique {
	static unsigned int object_guid_top;
private:
	unsigned int guid;
public:
	Unique (void) {
		this->guid = ++(Unique::object_guid_top);
	}

	inline unsigned int GetId(void) const { return this->guid; }
};

unsigned int Unique::object_guid_top = 0;

int
main (int argc, char * argv[]) {
	Unique * q = new Unique;
	std::tr1::shared_ptr <Unique> x (new Unique);
	std::tr1::shared_ptr <Unique> y (new Unique);
	std::tr1::shared_ptr <Unique> z (x);
	std::tr1::shared_ptr <Unique> w (q);
	
	if (x->GetId() == z->GetId()) {
		std::cout << "x == z\n";
	}

	if (y->GetId() == z->GetId()) {
		std::cout << "z == y\n";
	}
	else {
		std::cout << "z != y\n";
	}

	if (w->GetId() == q->GetId()) {
		std::cout << "q == w\n";
	}
	
}
