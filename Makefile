output: main.o Queue.o 
	g++ main.o Queue.o -o output
	
main.o: main.cpp
	g++ -c main.cpp
	
Queue.o: Queue.cpp Queue.hpp
	g++ -c Queue.cpp

clean: 
	rm *.o output