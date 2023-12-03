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
            Passenger(const Passenger &src);

            string get_fname() const;
            string get_lname() const;
            string get_phone() const;
            Seat* get_seat() const;
            int get_pass_id() const;

            void set_fname(const string& input);
            void set_lname(const string& input);
            void set_phone(const string& input);
            void set_seat(Seat* new_seat);
            void set_id(const int *id);

            void display_info() const;
        private:
        string fname;
        string lname;
        string phone;
        Seat* seat; 
        int id;
    };
#endif