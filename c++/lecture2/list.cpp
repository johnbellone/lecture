#include <iostream>
#include <list>

#define UNLINK_OBJECT(first, last, current) if (current) {					\
		if (current->next && current->prev) {										\
			if (first == current)														\
				first = current->next;													\
			if (last == current)															\
				last = current->prev;													\
			current->prev->next = current->next;									\
			current->next->prev = current->prev;									\
			current->next = NULL;														\
			current->prev = NULL;														\
		} else if (current->next) {													\
			if (first == current)														\
				first = current->next;													\
			current->next->prev = NULL;												\
			current->next = NULL;														\
		} else if (current->prev) {													\
			if (last == current)															\
				last = current->prev;													\
			current->prev->next = NULL;												\
			current->prev = NULL;														\
		} else {																				\
			if (first == current)														\
				first = NULL;																\
			if (last == current)															\
				last = NULL;																\
		}																						\
	}

#define LINK_OBJECT(first, last, current) if (!first)	\
	{																	\
      first = current;											\
      last = NULL;												\
      current->next = NULL;									\
      current->prev = NULL;									\
	}																	\
	else																\
	{																	\
      if (!last)													\
		{																\
			last = current;										\
			current->next = NULL;								\
			current->prev = first;								\
			first->next = current;								\
			first->prev = NULL;									\
		}																\
      else															\
		{																\
			current->prev = last;								\
			current->next = NULL;								\
			last->next = current;								\
			last = current;										\
		}																\
	}

struct Object {
	unsigned int value;
};

struct Node {
	Node * next, * prev;
	Object * object;
};

int
main (int argc, char * argv[]) {
	typedef std::list<Object *> ObjectList;
	Object objects[10];
	ObjectList list;

	for (int ii = 0; ii < 10; ii++) {
		objects[ii].value = ii;
		list.push_back ( &objects[ii] );
	}
	
	for (ObjectList::iterator it = list.begin(); it != list.end(); it++)
		std::cout << (*it)->value << " ";
	std::cout << "\n";
	
}
