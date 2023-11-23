#ifndef MY_PASSENGER_CLASS
#define MY_PASSENGER_CLASS
#include <string>
#include "seat.h"
    class Passenger {
        public:
            Passenger();
            Passenger(string fname, string lname, int phoneNumber);
        private:
        string fname;
        string lname;
        string phone;
        

    }
#endif