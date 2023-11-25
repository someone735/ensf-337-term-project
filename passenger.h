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
            Passenger(Passenger &src);

            string get_fname() const;
            string get_lname() const;
            string get_phone() const;
            Seat get_seat() const;

            void set_fname(string input);
            void set_lname(string input);
            void set_phone(string input);
            Seat set_seat(Seat* seat);
        private:
        string fname;
        string lname;
        string phone;
        Seat* seat; 
    };
#endif