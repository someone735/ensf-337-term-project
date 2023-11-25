#ifndef MY_PASSENGER_CLASS
#define MY_PASSENGER_CLASS
#include <string>
#include <iostream>
#include "seat.h"
using namespace std;
    class Passenger {
        public:
            Passenger();
            ~Passenger();
        private:
        string fname;
        string lname;
        string phone;
        Seat* seat; 
    };
#endif