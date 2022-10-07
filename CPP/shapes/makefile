shapes: main.o point.o shape.o rectangle.o
	g++ main.o point.o shape.o rectangle.o -o shapes
main.o: main.cpp rectangle.hh
	g++ -c main.cpp
point.o: point.hh point.cpp
	g++ -c point.cpp
rectangle.o: rectangle.hh rectangle.cpp point.hh shape.hh
	g++ -c rectangle.cpp
clean:
	rm *.o