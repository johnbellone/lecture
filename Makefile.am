# Automake script
# jvb4@njit.edu

EXTRA_DIST = etc/lecture1.pdf

C_FLAGS = -I/usr/local/include -I/usr/include -I$(prefix)/include -I./include 
L_FLAGS = -L/usr/local/lib -L/usr/lib -L$(prefix)/lib -L./lib

CFLAGS = -g -Wall $(C_FLAGS)
CXXFLAGS = -g -Wall $(C_FLAGS)

bin_PROGRAMS = bin/lecture1/helloworld_cpp bin/lecture1/helloworld_c bin/lecture1/encapsulation \
bin/lecture1/bitfield bin/lecture1/goto bin/lecture1/inheritance bin/lecture1/pass bin/lecture1/pointer \
bin/lecture1/union bin/lecture1/c99loop bin/lecture1/operators bin/lecture1/object bin/lecture1/enum_c \
bin/lecture1/enum_cpp bin/lecture1/factorial bin/lecture2/vector bin/lecture2/map bin/lecture2/list \
bin/lecture2/shared_ptr bin/lecture2/thread bin/lecture2/twitter

bin_lecture2_twitter_LDFLAGS = -lboost_thread-mt -lcurl
bin_lecture2_twitter_SOURCES = c++/lecture2/twitter.cpp
bin_lecture2_thread_LDFLAGS = -lboost_thread-mt
bin_lecture2_thread_SOURCES = c++/lecture2/thread.cpp
bin_lecture2_shared_ptr_SOURCES = c++/lecture2/shared_ptr.cpp
bin_lecture2_list_SOURCES = c++/lecture2/list.cpp
bin_lecture2_map_SOURCES = c++/lecture2/map.cpp
bin_lecture2_vector_SOURCES = c++/lecture2/vector.cpp
bin_lecture1_factorial_SOURCES = c++/lecture1/factorial.cpp
bin_lecture1_operators_SOURCES = c++/lecture1/operators.cpp
bin_lecture1_object_SOURCES = c++/lecture1/object.cpp
bin_lecture1_encapsulation_SOURCES = c++/lecture1/encapsulation.cpp
bin_lecture1_c99loop_CFLAGS = -std=c99
bin_lecture1_c99loop_SOURCES = c/lecture1/c99loop.c
bin_lecture1_enum_c_SOURCES = c/lecture1/enum.c
bin_lecture1_enum_cpp_SOURCES = c++/lecture1/enum.cpp
bin_lecture1_bitfield_SOURCES = c++/lecture1/bitfield.cpp
bin_lecture1_union_SOURCES = c++/lecture1/union.cpp
bin_lecture1_goto_SOURCES = c++/lecture1/goto.cpp
bin_lecture1_inheritance_SOURCES = c++/lecture1/inheritance.cpp
bin_lecture1_pointer_SOURCES = c++/lecture1/pointer.cpp
bin_lecture1_pass_SOURCES = c++/lecture1/pass.cpp
bin_lecture1_helloworld_c_SOURCES = c/lecture1/helloworld.c
bin_lecture1_helloworld_cpp_SOURCES = c++/lecture1/helloworld.cpp



