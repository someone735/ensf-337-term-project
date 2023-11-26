#include "Flight.h"
#include <iostream>



void Flight::showSeatMap() {
    
}

void Flight::showPassengerInfo() {
    for (const auto& passenger : passengerList) {
        passenger.displayInfo();
    }
}

void Flight::addPassenger(const Passenger& newPassenger) {
    passengerList.push_back(newPassenger);
}

void Flight::removePassenger(int id) {
    
}

void Flight::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);

    

    outFile.close();
}
