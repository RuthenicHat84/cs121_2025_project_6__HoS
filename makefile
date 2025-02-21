HoS: address.o date.o student.o main.o
	g++ -g address.o date.o student.o main.o -o HoS

address.o: address.cpp
	g++ -g -c address.cpp

date.o: date.cpp
	g++ -g -c date.cpp

student.o: student.cpp
	g++ -g -c student.cpp

main.o: address.h date.h student.h main.cpp
	g++ -g -c main.cpp

clean: 
	rm *.o
	rm HoS

run: HoS
	./HoS

debug: HoS
	gdb HoS
