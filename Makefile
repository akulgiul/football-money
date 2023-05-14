make: main.o player.o event.o
	g++ -o football-money main.o player.o event.o

main.o: main.cpp
	g++ -c main.cpp

player.o : player.cpp player.h
	g++ -c player.cpp

event.o : event.cpp event.h
	g++ -c event.cpp

clean:
	rm *.o football-money