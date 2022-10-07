cars: main.o car.o
	g++ main.o car.o -o cars
main.o: main.cpp car.hh
	g++ -c main.cpp
car.o: car.hh car.cpp
	g++ -c car.cpp
clean:
	rm *.o cars