#ifndef PASSENGER_H
#define PASSENGER_H

#include "Seat.h"
#include <string>

class Passenger {
public:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    Seat* assignedSeat;
    int id;

    Passenger(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, Seat* assignedSeat, int id);

    void displayInfo() const;
};

#endif
