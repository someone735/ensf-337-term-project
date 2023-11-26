#ifndef AIRLINE_H
#define AIRLINE_H

#include "Flight.h"

class Airline {
public:
    void addFlight(const Flight& newFlight);
    void showAllFlights() const;
    void showAllPassengers() const;
    void addPassenger(int id, const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, int row, const std::string& seat);
    void removePassenger(int id);
    void saveToFile(const std::string& filename) const;

private:
    std::vector<Flight> flights;
};

#endif
