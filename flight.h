#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS

#include <iostream>
#include <vector>
#include <string>
#include "passenger.h"
#include "seat.h"

class Flight {
public:
    // Constructors and Destructor
    Flight();
    ~Flight();
    Flight(Flight &src);

    // Member functions
    vector<int> display_seat_map() const;

    // Setters
    void set_num_rows(int rows);
    void set_num_cols(int cols);
    void set_id(string input);

    // Getters
    int get_num_rows() const;
    int get_num_cols() const;
    string get_id() const;

private:
    string id;
    int num_rows;
    int num_cols;
    vector<Passenger> passengers;
    vector<vector<Seat>> seat_map;
};

#endif

