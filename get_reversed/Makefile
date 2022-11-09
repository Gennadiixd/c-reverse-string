compile-static:
	g++ -c get_reversed.cpp
	g++ -c reverse.cpp
	g++ -o main reverse.o get_reversed.o -lm

compile-dynamic:
	g++ -c get_reversed.cpp
	g++ -c reverse.cpp
	g++ -shared -fPIC -o libget_reversed.so get_reversed.o
	g++ -o main reverse.o ./libget_reversed.so -lm

run:
	./main

clean:
	rm get_reversed.o
	rm reverse.o
	rm main
	rm libget_reversed.so