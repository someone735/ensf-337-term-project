#include "Airline.h"
#include <iostream>

void Airline::addFlight(const Flight& newFlight) {
    flights.push_back(newFlight);
}

void Airline::showAllFlights() const {
    std::cout << "List of all flights:" << std::endl;
    for (const auto& flight : flights) {
        std::cout << "Flight Number: " << flight.flightNumber << " | Rows: " << flight.numRows
                  << " | Seats per Row: " << flight.numSeatsPerRow << std::endl;
    }
}

void Airline::showAllPassengers() const {
    for (const auto& flight : flights) {
        flight.showPassengerInfo();
    }
}

void Airline::addPassenger(int id, const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, int row, const std::string& seat) {
    Flight& targetFlight = flights.front(); 
    Seat newPassengerSeat(row, seat[0]);
    Passenger newPassenger(firstName, lastName, phoneNumber, &newPassengerSeat, id);
    targetFlight.addPassenger(newPassenger);
}

void Airline::removePassenger(int id) {
    for (auto& flight : flights) {
        flight.removePassenger(id);
    }
}

void Airline::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);

    if (outFile.is_open()) {

        
        for (const auto& flight : flights) {
            outFile << "Flight " << flight.flightNumber << "\n";
            flight.saveToFile(outFile);
        }

        outFile.close();
        std::cout << "Airline information saved to " << filename <<
    }
}    