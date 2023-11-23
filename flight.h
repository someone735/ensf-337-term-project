#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS
#include <iostream>
#include <vector>
class Flight{
    public:
        Flight();
        Flight(int num_rows, int num_cols, vector <passengers> passengers, vector <vector<seat>> seatmap);
        vector display_seatmap;
    private:
    string id;
    int num_rows;
    int num_cols;
    vector <passenger> passengers;
    vector <vector<seat>> seatmap;
    }
#endif