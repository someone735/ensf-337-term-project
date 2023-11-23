#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS
#include <iostream>
class Flight{
    public:
        Flight();
        
    private:
    string id;
    int num_rows;
    int num_cols;
    vector <passenger> passengers;
    vector <vector<seat>> seatmap;
    }
#endif