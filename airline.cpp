#include "Airline.h"

// Default Constructor
Airline::Airline() name(""), flights(), num_flights(0) {}

// Destructor 
Airline::~Airline() {
    
}

// Copy Constructor
Airline::Airline(const Airline& src) : name(src.name), flights(src.flights), num_flights(src.num_flights) {
    
}

// Getter functions
std::string Airline::get_name() const {
    return name;
}

int Airline::get_numflights() const{
    return num_flights;
}

// Setter functions

void Airline::set_name(string name){
    this -> name = name;
}

void Airline::set_num_flights(int number_of_flights)
{
    num_flights = number_of_flights;
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