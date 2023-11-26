#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS
#include <iostream>
#include <vector>
#include <string>
#include "passenger.h"
#include "seat.h"
using namespace std;
class Flight{
    public:
        Flight();
        ~Flight();
        Flight(Flight &src);
        vector<int> display_seatmap();

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
    vector <Passenger> passengers;
    vector <vector<Seat>> seatmap;
    };
#endif
