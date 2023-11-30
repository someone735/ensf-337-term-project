#include<vector>
#include<string>
#include <iostream>
#include <fstream>
#include "flight.h"
using namespace std;

Flight populate_flight(string file_name){
    Flight new_flight;
    ifstream read_file;
    read_file.open(file_name);
    string read_id;
    read_file >> read_id;
    int read_rows;
    read_file >> read_rows;
    int read_seats;
    read_file >> read_seats;
    cout << read_id << " " << read_rows << " " << read_seats << endl;
    read_file.close();

    return new_flight;
}

int main(){
    Flight f;
    f = populate_flight("flight_info.txt");
    return 0;
}