#include "Flight.h"
#include <iostream>

void Flight::showSeatMap() const {
    std::cout << "Aircraft Seat Map" << std::endl;

    
    std::cout << " ";
    for (char seat = 'A'; seat < 'A' + numSeatsPerRow; ++seat) {
        std::cout << seat << " ";
    }
    std::cout << std::endl;

    
    for (int row = 0; row < numRows; ++row) {
        std::cout << row << "|";
        for (char seat = 'A'; seat < 'A' + numSeatsPerRow; ++seat) {
            bool occupied = false;

            
            for (const auto& passenger : passengerList) {
                if (passenger.assignedSeat->row == row && passenger.assignedSeat->seat == seat) {
                    occupied = true;
                    break;
                }
            }

            std::cout << (occupied ? "X" : " ") << "|";
        }
        std::cout << std::endl;
    }
}

void Flight::showPassengerInfo() const {
    std::cout << "First Name Last Name Phone Row Seat ID" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    for (const auto& passenger : passengerList) {
        passenger.displayInfo();
        std::cout << "-----------------------------------------------------------------" << std::endl;
    }
}

void Flight::addPassenger(const Passenger& newPassenger) {
    passengerList.push_back(newPassenger);
}

void Flight::removePassenger(int id) {
    auto it = std::remove_if(passengerList.begin(), passengerList.end(), [id](const Passenger& passenger) {
        return passenger.id == id;
    });

    passengerList.erase(it, passengerList.end());
}

void Flight::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << flightNumber << " " << numRows << " " << numSeatsPerRow << "\n";

        // Write passenger information
        for (const auto& passenger : passengerList) {
            outFile << passenger.firstName << " " << passenger.lastName << " " << passenger.phoneNumber << " "
                    << passenger.assignedSeat->row << passenger.assignedSeat->seat << " " << passenger.id << "\n";
        }

        outFile.close();
        std::cout << "Passenger information saved to " << filename << std::endl;
    } else {
        std::cerr << "Error: Unable to open the file for writing." << std::endl;
    }
}
