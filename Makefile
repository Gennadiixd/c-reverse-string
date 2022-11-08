#!make

run-c:
	gcc -o reverse_c reverse.c
	mv ./reverse_c ./bin
	./bin/reverse_c


run-cpp:
	g++ -o reverse_cpp reverse.cpp
	mv ./reverse_cpp ./bin
	./bin/reverse_cpp