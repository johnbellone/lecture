# Automake script
# jvb4@njit.edu

EXTRA_DIST = etc/lecture1.pdf

CFLAGS = -g -O0 -Wall
CXXFLAGS = -g -O0 -Wall

C_FLAGS = -I/usr/local/include -I/usr/include -I$(prefix)/include -I./include 
L_FLAGS = -L/usr/local/lib -L/usr/lib -L$(prefix)/lib -L./lib

bin_PROGRAMS = bin/lecture1/helloworld_cpp bin/lecture1/helloworld_c bin/lecture1/encapsulation \
bin/lecture1/bitfield bin/lecture1/goto bin/lecture1/inheritance bin/lecture1/pass bin/lecture1/pointer \
bin/lecture1/union bin/lecture1/c99loop bin/lecture1/operators bin/lecture1/object bin/lecture1/enum_c \
bin/lecture1/enum_cpp

bin_lecture1_operators_CFLAGS = $(C_FLAGS)
bin_lecture1_operators_LFLAGS = $(L_FLAGS)
bin_lecture1_operators_LDFLAGS = $(L_FLAGS)
bin_lecture1_operators_SOURCES = c++/lecture1/operators.cpp

bin_lecture1_object_CFLAGS = $(C_FLAGS)
bin_lecture1_object_LFLAGS = $(L_FLAGS)
bin_lecture1_object_LDFLAGS = $(L_FLAGS)
bin_lecture1_object_SOURCES = c++/lecture1/object.cpp

bin_lecture1_encapsulation_CFLAGS = $(C_FLAGS)
bin_lecture1_encapsulation_LFLAGS = $(L_FLAGS)
bin_lecture1_encapsulation_LDFLAGS = $(L_FLAGS)
bin_lecture1_encapsulation_SOURCES = c++/lecture1/encapsulation.cpp

bin_lecture1_c99loop_CFLAGS = -std=c99 $(C_FLAGS)
bin_lecture1_c99loop_LFLAGS = $(L_FLAGS)
bin_lecture1_c99loop_LDFLAGS = $(L_FLAGS)
bin_lecture1_c99loop_SOURCES = c/lecture1/c99loop.c

bin_lecture1_enum_c_CFLAGS = -std=c99 $(C_FLAGS)
bin_lecture1_enum_c_LFLAGS = $(L_FLAGS)
bin_lecture1_enum_c_LDFLAGS = $(L_FLAGS)
bin_lecture1_enum_c_SOURCES = c/lecture1/enum.c

bin_lecture1_enum_cpp_CFLAGS = $(C_FLAGS)
bin_lecture1_enum_cpp_LFLAGS = $(L_FLAGS)
bin_lecture1_enum_cpp_LDFLAGS = $(L_FLAGS)
bin_lecture1_enum_cpp_SOURCES = c++/lecture1/enum.cpp

bin_lecture1_bitfield_CFLAGS = $(C_FLAGS)
bin_lecture1_bitfield_LFLAGS = $(L_FLAGS)
bin_lecture1_bitfield_LDFLAGS = $(L_FLAGS)
bin_lecture1_bitfield_SOURCES = c++/lecture1/bitfield.cpp

bin_lecture1_union_CFLAGS = $(C_FLAGS)
bin_lecture1_union_LFLAGS = $(L_FLAGS)
bin_lecture1_union_LDFLAGS = $(L_FLAGS)
bin_lecture1_union_SOURCES = c++/lecture1/union.cpp

bin_lecture1_goto_CFLAGS = $(C_FLAGS)
bin_lecture1_goto_LFLAGS = $(L_FLAGS)
bin_lecture1_goto_LDFLAGS = $(L_FLAGS)
bin_lecture1_goto_SOURCES = c++/lecture1/goto.cpp

bin_lecture1_inheritance_CFLAGS = $(C_FLAGS)
bin_lecture1_inheritance_LFLAGS = $(L_FLAGS)
bin_lecture1_inheritance_LDFLAGS = $(L_FLAGS)
bin_lecture1_inheritance_SOURCES = c++/lecture1/inheritance.cpp

bin_lecture1_pointer_CFLAGS = $(C_FLAGS)
bin_lecture1_pointer_LFLAGS = $(L_FLAGS)
bin_lecture1_pointer_LDFLAGS = $(L_FLAGS)
bin_lecture1_pointer_SOURCES = c++/lecture1/pointer.cpp

bin_lecture1_pass_CFLAGS = $(C_FLAGS)
bin_lecture1_pass_LFLAGS = $(L_FLAGS)
bin_lecture1_pass_LDFLAGS = $(L_FLAGS)
bin_lecture1_pass_SOURCES = c++/lecture1/pass.cpp

bin_lecture1_helloworld_c_CFLAGS = $(C_FLAGS)
bin_lecture1_helloworld_c_LFLAGS = $(L_FLAGS)
bin_lecture1_helloworld_c_LDFLAGS = $(L_FLAGS)
bin_lecture1_helloworld_c_SOURCES = c/lecture1/helloworld.c

bin_lecture1_helloworld_cpp_CPPFLAGS = $(C_FLAGS)
bin_lecture1_helloworld_cpp_LFLAGS = $(L_FLAGS)
bin_lecture1_helloworld_cpp_LDFLAGS = $(L_FLAGS)
bin_lecture1_helloworld_cpp_SOURCES = c++/lecture1/helloworld.cpp



