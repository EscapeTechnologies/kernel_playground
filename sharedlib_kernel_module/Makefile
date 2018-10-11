obj-m += foo.o
foo-obj += program.o wrapper.a

static_library: reverse.cpp
	g++ -Wall -Wextra -std=c++11 -c reverse.cpp
	ar rcs libreverse.a reverse.o

all: static_library
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean
