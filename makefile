HoS: address.o main.o
	g++ -g -c address.o main.o HoS

address.o: address.cpp
	g++ -g -c address.cpp

main.o: address.o main.cpp
	g++ -g -c main.cpp

clean: 
	rm *.o
	rm HoS

run: HoS
	./HoS

debug: HoS
	gdb HoS