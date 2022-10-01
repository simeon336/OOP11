company: main.o employee.o
	g++ main.o employee.o -o company
main.o: main.cpp employee.hh
	g++ -c main.cpp
employee.o: employee.hh employee.cpp human.hh
	g++ -c employee.cpp
manager.o: manager.hh manager.cpp employee.hh
	g++ -c manager.cpp
clean:
	rm *.o company