#ifndef FLIGHT_H
#define FLIGHT_H

#include "Passenger.h"
#include <vector>
#include <fstream>

class Flight {
public:
    std::string flightNumber;
    int numRows;
    int numSeatsPerRow;
    std::vector<Passenger> passengerList;

    void showSeatMap();

    void showPassengerInfo();

    void addPassenger(const Passenger& newPassenger);

    void removePassenger(int id);

    void saveToFile(const std::string& filename);
};

#endif
