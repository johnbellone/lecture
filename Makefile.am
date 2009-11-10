# Automake script
# jvb4@njit.edu

CFLAGS = -g -O0 -Wall
CXXFLAGS = -g -O0 -Wall

C_FLAGS = -I/usr/local/include -I/usr/include -I$(prefix)/include -I./include 
L_FLAGS = -L/usr/local/lib -L/usr/lib -L$(prefix)/lib -L./lib

bin_PROGRAMS = bin/helloworld_cpp bin/helloworld_c

bin_helloworld_c_CFLAGS = $(C_FLAGS)
bin_helloworld_c_LFLAGS = $(L_FLAGS)
bin_helloworld_c_LDFLAGS = $(L_FLAGS)
bin_helloworld_c_SOURCES = c/helloworld.c

bin_helloworld_cpp_CPPFLAGS = $(C_FLAGS)
bin_helloworld_cpp_LFLAGS = $(L_FLAGS)
bin_helloworld_cpp_LDFLAGS = $(L_FLAGS)
bin_helloworld_cpp_SOURCES = c++/helloworld.cpp



