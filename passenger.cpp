#include "Passenger.h"
#include <iostream>

Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, Seat* assignedSeat, int id)
    : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), assignedSeat(assignedSeat), id(id) {
    
}

void Passenger::displayInfo() const {
    std::cout << "ID: " << id << " Name: " << firstName << " " << lastName
              << " Phone: " << phoneNumber << " Seat: " << assignedSeat->row << assignedSeat->seat << std::endl;
}
