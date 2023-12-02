#include<vector>
#include<string>
#include <iostream>
#include <fstream>
#include "flight.h"
#include "flight.cpp"
#include "airline.h"
#include "passenger.h"
#include "seat.h"
#include "airline.cpp"
#include "passenger.cpp"
#include "seat.cpp"
using namespace std;

Flight populate_flight(string file_name);

Flight populate_flight(string file_name){
    Flight new_flight;
    ifstream read_file;
    read_file.open(file_name);
    if (!read_file.is_open())
    string read_flight_id;
    getline(read_file,read_flight_id, ' ');
    int read_rows_string;
    read_file >> read_rows_string;
    // int read_rows = stoi(read_rows_string);
    int read_num_seats_string;
    read_file >> read_num_seats_string;
    // int read_seats = stoi(read_num_seats_string);
    
    cout << read_flight_id << read_rows_string << read_num_seats_string << endl; 
    getline(read_file,read_flight_id, '\n');
    char read_fname_temp[21];
    char read_lname_temp[21];
    char read_phone_temp[21];
    string read_fname;
    string read_lname;
    string read_phone;
    string read_seat;
    string read_id;
    // getline(read_file,read_fname, ' ');
    // getline(read_file,read_lname, ' ');
    read_file.get(read_fname_temp, 20, '\n');
    read_fname = read_fname_temp;
    read_file.get(read_lname_temp, 20, '\n');
    read_lname = read_lname_temp;
    read_file.get(read_phone_temp, 20, '\n');
    read_phone = read_phone_temp;
    getline(read_file, read_seat, ' ');
    int row = read_seat[0];
    int seat = read_seat[1];
    getline(read_file, read_id);
    cout << read_fname << read_lname << read_phone << row << seat << read_id << endl;
    new_flight.set_id(read_flight_id);
    read_file.close();

    return new_flight;
}

int main(){
    Flight f = populate_flight("flight_info.txt");
    return 0;
}