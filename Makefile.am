# Automake script
# jvb4@njit.edu

EXTRA_DIST = etc/lecture1.pdf

CFLAGS = -g -O0 -Wall
CXXFLAGS = -g -O0 -Wall

C_FLAGS = -I/usr/local/include -I/usr/include -I$(prefix)/include -I./include 
L_FLAGS = -L/usr/local/lib -L/usr/lib -L$(prefix)/lib -L./lib

bin_PROGRAMS = bin/helloworld_cpp bin/helloworld_c bin/encapsulation bin/bitfield \
bin/goto bin/inheritance bin/pass bin/pointer bin/union bin/c99loop bin/operators \
bin/object

bin_operators_CFLAGS = $(C_FLAGS)
bin_operators_LFLAGS = $(L_FLAGS)
bin_operators_LDFLAGS = $(L_FLAGS)
bin_operators_SOURCES = c++/operators.cpp

bin_object_CFLAGS = $(C_FLAGS)
bin_object_LFLAGS = $(L_FLAGS)
bin_object_LDFLAGS = $(L_FLAGS)
bin_object_SOURCES = c++/object.cpp

bin_encapsulation_CFLAGS = $(C_FLAGS)
bin_encapsulation_LFLAGS = $(L_FLAGS)
bin_encapsulation_LDFLAGS = $(L_FLAGS)
bin_encapsulation_SOURCES = c++/encapsulation.cpp

bin_c99loop_CFLAGS = -std=c99 $(C_FLAGS)
bin_c99loop_LFLAGS = $(L_FLAGS)
bin_c99loop_LDFLAGS = $(L_FLAGS)
bin_c99loop_SOURCES = c/c99loop.c

bin_bitfield_CFLAGS = $(C_FLAGS)
bin_bitfield_LFLAGS = $(L_FLAGS)
bin_bitfield_LDFLAGS = $(L_FLAGS)
bin_bitfield_SOURCES = c++/bitfield.cpp

bin_union_CFLAGS = $(C_FLAGS)
bin_union_LFLAGS = $(L_FLAGS)
bin_union_LDFLAGS = $(L_FLAGS)
bin_union_SOURCES = c++/union.cpp

bin_goto_CFLAGS = $(C_FLAGS)
bin_goto_LFLAGS = $(L_FLAGS)
bin_goto_LDFLAGS = $(L_FLAGS)
bin_goto_SOURCES = c++/goto.cpp

bin_inheritance_CFLAGS = $(C_FLAGS)
bin_inheritance_LFLAGS = $(L_FLAGS)
bin_inheritance_LDFLAGS = $(L_FLAGS)
bin_inheritance_SOURCES = c++/inheritance.cpp

bin_pointer_CFLAGS = $(C_FLAGS)
bin_pointer_LFLAGS = $(L_FLAGS)
bin_pointer_LDFLAGS = $(L_FLAGS)
bin_pointer_SOURCES = c++/pointer.cpp

bin_pass_CFLAGS = $(C_FLAGS)
bin_pass_LFLAGS = $(L_FLAGS)
bin_pass_LDFLAGS = $(L_FLAGS)
bin_pass_SOURCES = c++/pass.cpp

bin_helloworld_c_CFLAGS = $(C_FLAGS)
bin_helloworld_c_LFLAGS = $(L_FLAGS)
bin_helloworld_c_LDFLAGS = $(L_FLAGS)
bin_helloworld_c_SOURCES = c/helloworld.c

bin_helloworld_cpp_CPPFLAGS = $(C_FLAGS)
bin_helloworld_cpp_LFLAGS = $(L_FLAGS)
bin_helloworld_cpp_LDFLAGS = $(L_FLAGS)
bin_helloworld_cpp_SOURCES = c++/helloworld.cpp



