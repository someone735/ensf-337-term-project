#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "passenger.h"
#include "seat.h"
using namespace std;
class Flight{
    public:
        Flight();
        ~Flight();
        Flight(const Flight &src);
        vector<int> display_seatmap() const;

        // Setters
        void set_num_rows(int rows);
        void set_num_cols(int cols);
        void set_id(string input);


        // Getters 
        int get_num_rows() const;
        int get_num_cols() const;
        string get_id() const;
        Passenger get_passenger(int x) const;

        void populate_flight(const string file_name);
        void add_passenger(const string in_fname, const string in_lname, const string in_phone, Seat* in_seat, const int in_id);
    private:
    string id;
    int num_rows;
    int num_cols;
    vector <Passenger> passengers;
    vector <vector<Seat> > seatmap;
    };
#endif