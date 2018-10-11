shared_library: reverse.cpp
	g++ -fPIC -Wall -Wextra -std=c++11 -c reverse.cpp
	g++ -shared -o libreverse.so reverse.o -static-libstdc++

shared_program: shared_library main.c
	gcc -Wall -Wextra -I . -c main.c
	gcc -o prog main.o -L . -lreverse

static_library: reverse.cpp
	g++ -Wall -Wextra -std=c++11 -c reverse.cpp
	ar rcs libreverse.a reverse.o

static_program:
	gcc -Wall -Wextra -I. -c main.c
	g++ -o prog main.o -L. -lreverse
clean:
	rm *.o *.a *.so
