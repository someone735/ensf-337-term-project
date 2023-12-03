#include "flight.h"
using namespace std;

// Default Constructor
Flight::Flight() : id(""), num_rows(0), num_cols(0), passengers(), seatmap() {

}
// Destructor
Flight::~Flight() {
    
}

// Copy Constructor
Flight::Flight(const Flight& src) : id(src.id), num_rows(src.num_rows), num_cols(src.num_cols), passengers(src.passengers), seatmap(src.seatmap) {
    // for (int i = 0; i < src.passengers.size(); i++){
    //     this -> passengers.push_back(passengers[i]);
    // }
}

// Member function to display seat map
std::vector<int> Flight::display_seatmap() const {
    // Displaying a simple seat map on the console
    std::cout << "       Aircraft Seat Map\n";
    std::cout << "     A   B   C   D   E   F\n";
    std::cout << "   +---+---+---+---+---+---+\n";

    for (int row = 0; row < num_rows; ++row) {
        std::cout << row << " |";
        for (int col = 0; col < num_cols; ++col) {
            // Check if the seat is occupied
            bool occupied = false;
            for (const Passenger& passenger : passengers) {
                if (passenger.get_seat() && passenger.get_seat()->getrow() == row && passenger.get_seat()->getcolumns() == col) {
                    occupied = true;
                    break;
                }
            }

            // Display 'X' for occupied seats, ' ' for available seats
            char seatStatus = occupied ? 'X' : ' ';
            std::cout << "   " << seatStatus << " |";
        }
        std::cout << "\n";
        std::cout << "   +---+---+---+---+---+---+\n";
    }

    // Returning a vector of integers as a placeholder
    return std::vector<int>();
}


// Setters
void Flight::set_num_rows(int rows) {
    num_rows = rows;
}

void Flight::set_num_cols(int cols) {
    num_cols = cols;
}

void Flight::set_id(string input){
    id = input;
}



// Getters
int Flight::get_num_rows() const {
    return num_rows;
}

int Flight::get_num_cols() const {
    return num_cols;
}

std::string Flight::get_id() const {
    return id;
}

Passenger Flight::get_passenger(int x) const{
    return passengers.at(x);
}

void Flight::add_passenger(const string in_fname, const string in_lname, const string in_phone, Seat* in_seat, const int in_id){
    Passenger new_passenger;
    new_passenger.set_fname(in_fname);
    new_passenger.set_lname(in_lname);
    new_passenger.set_phone(in_phone);
    new_passenger.set_seat(in_seat);
    new_passenger.set_id(in_id);
    passengers.push_back(new_passenger);
}