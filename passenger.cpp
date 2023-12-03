#include "passenger.h"

// Default Constructor
Passenger::Passenger() : fname(""), lname(""), phone(""), seat(nullptr), id(0){}

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

Seat* Passenger::get_seat() const {
    return seat;
}

int Passenger::get_pass_id() const{
    return id;
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

void Passenger::set_id(const int *input_id){
    id = *input_id;
}

void Passenger::display_info() const {
    std::cout << "Passenger Information:\n";
    std::cout << "First Name: " << fname << "\n";
    std::cout << "Last Name: " << lname << "\n";
    std::cout << "Phone Number: " << phone << "\n";

    if (seat) {
        std::cout << "Seat: " << seat->getrow() << seat->getcolumns() << "\n";
    } else {
        std::cout << "Seat: Not assigned\n";
    }

    std::cout << "------------------------\n";
}