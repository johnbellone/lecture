// Single and Multiple Inheritance Example
// jb@thunkbrightly.com
#include <iostream>
#include <string>

class Named {
private:
	std::string name;
public:
	Named (const std::string name) {
		this->name = name;
	}
	
	inline const std::string & GetName (void) const { return this->name; }

	inline friend std::ostream & operator<< (std::ostream & stream, const Named & n) {
		stream << n.GetName();
		return stream;
	}
};

class Mammal {
private:
	std::string species;
protected:
	inline void SetSpecies (const std::string & species) { this->species = species;; }
public:
	inline const std::string & GetSpecies (void) const { return this->species; }
	
	inline friend bool operator== (const Mammal & l, const Mammal & r) {
		return (l.GetSpecies() == r.GetSpecies());
	}

	inline friend bool operator!= (const Mammal & l, const Mammal & r) {
		return !(operator== (l, r));
	}
};

class Dog : public Mammal, public Named {
private:
	unsigned int age;
public:
	Dog (const std::string & name, unsigned int age)
		: Named (name) {
		this->age = age;

		Mammal::SetSpecies ("dog");
	}

	inline unsigned int GetAge (void) const { return this->age; }
	inline void SetAge (unsigned int age) { this->age = age; }
};

class Cat : public Mammal, public Named {
private:
	unsigned int age;
public:
	Cat (const std::string & name, unsigned int age)
		: Named (name) {
		this->age = age;

		SetSpecies ("cat");
	}

	inline unsigned int GetAge (void) const { return this->age; }
	inline void SetAge (unsigned int age) { this->age = age; }
};

class Human : public Mammal, public Named {
private:
	unsigned int age;
public:
	Human (const std::string & name, unsigned int age)
		: Named (name) {
		this->age = age;

		SetSpecies ("human");
	}

	inline unsigned int GetAge (void) const { return this->age; }
	inline void SetAge (unsigned int age) { this->age = age; }
};

class Infant : public Human {
public:
	Infant (const std::string & name) : Human (name, 1) { }
};

class Man : virtual public Mammal, virtual Named {
public:
	Man (void)
		: Named ("Man") {
		SetSpecies ("man");
	}
};

class Bear : virtual public Mammal, virtual Named {
public:
	Bear (void)
		: Named ("bear") {
		SetSpecies ("bear");
	}
};

class Pig : virtual public Mammal, virtual public Named {
public:
	Pig (void)
		: Named ("pig") {
		SetSpecies ("pig");
	}
};

class ManBearPig : public Man, public Bear, public Pig {
public:
	ManBearPig (void)
		: Named ("Manbearpig")  {
		SetSpecies ("Manbearpig");
	}
	
	std::ostream & operator<< (std::ostream & stream) {
		stream << GetName() << " ";
		return stream;
	}
};

int
main (int argc, char * argv[]) {

	Cat kitten ("Whiskers", 1);
	Cat cat ("Garfield", 3);
	Human father ("Jerry", 30);
	Infant boy ("Derek");
	Dog dog ("Fido", 3);
	ManBearPig mbp;
	
	if (cat == kitten) {
		std::cout << cat << " and " << kitten << " are the same species.\n";
	}
	
	if (cat != dog) {
		std::cout << cat << " and " << dog << " are NOT the same species.\n";
	}

	if (father == boy) {
		std::cout << father << " and " << boy << " are the same species.\n";
	}

	std::cout << mbp << " is the result of multiple inheritance.\n";

}
