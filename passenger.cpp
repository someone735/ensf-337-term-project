#include "passenger.h"


Passenger::Passenger(){
    string fname;
    string lname;
    string phone;
    Seat* seat = nullptr;
}

Passenger::Passenger(Passenger &src){
    this -> fname = src.fname;
    this -> lname = src.lname;
    this -> phone = src.phone;
    this -> seat = src.seat;
}

string Passenger::get_fname() const{
    return fname;
}

string Passenger::get_lname() const{
    return lname;
}

string Passenger::get_phone() const{
    return phone;
}

Seat Passenger::get_seat() const{
    return *seat;
}

void Passenger::set_fname(string input) {
    this->fname = input;
}

void Passenger::set_lname(string input) {
    this->lname = input;
}

void Passenger::set_phone(string input) {
    this->phone = input;
}

Seat Passenger::set_seat(Seat* seat) {
    this->seat = seat;
}