#include "passenger.h"

// Default Constructor
Passenger::Passenger() : fname(""), lname(""), phone(""), seat(nullptr) {}

// Destructor
Passenger::~Passenger() {
}

// Copy Constructor
Passenger::Passenger(const Passenger& src) : fname(src.fname), lname(src.lname), phone(src.phone), seat(src.seat) {
}

// Getter functions
string Passenger::get_fname() const {
    return fname;
}

string Passenger::get_lname() const {
    return lname;
}

string Passenger::get_phone() const {
    return phone;
}

const Seat* Passenger::get_seat() const {
    return seat;
}

// Setter functions
void Passenger::set_fname(const string& input) {
    fname = input;
}

void Passenger::set_lname(const string& input) {
    lname = input;
}

void Passenger::set_phone(const string& input) {
    phone = input;
}

void Passenger::set_seat(Seat* new_seat) {
    seat = new_seat;
}
