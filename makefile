HoS: address.o date.o main.o
	g++ -g address.o date.o main.o -o HoS

address.o: address.cpp
	g++ -g -c address.cpp

date.o: date.cpp
	g++ -g -c date.cpp

main.o: address.h date.h main.cpp
	g++ -g -c main.cpp

clean: 
	rm *.o
	rm HoS

run: HoS
	./HoS

debug: HoS
	gdb HoS
