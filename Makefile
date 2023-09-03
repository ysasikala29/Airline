all: AirlineReservationSystem

AirlineReservationSystem: Domestic.cpp Domestic.h International.cpp International.h Main.cpp Store.cpp Store.h Personal.cpp Personal.h
    g++ -o project Domestic.cpp International.cpp Main.cpp Store.cpp Personal.cpp

clean:
	rm -f project