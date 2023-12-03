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

Flight populate_flight_not(const string file_name);

Flight populate_flight_not(const string file_name){
    Flight new_flight;
    ifstream read_file;
    read_file.open(file_name);
    if (!read_file.is_open()){
        cerr << "Error in reading file " << file_name << endl; 
        return new_flight;
    } 
    string read_flight_id;
    int read_rows, read_num_seats; 
    read_file >> read_flight_id >> read_rows >> read_num_seats;
   
    new_flight.set_id(read_flight_id);
    new_flight.set_num_rows(read_rows);
    new_flight.set_num_cols(read_num_seats);
    
    string read_line;
    getline(read_file, read_line);
    int i = 0;
    while (getline(read_file, read_line)) {
        char fname_ch[21], lname_ch[21], phone_ch[21];
        istringstream iss(read_line);
        int seat_loc_row;
        char seat_loc_col;
        int pass_id;
        
        iss.get(fname_ch, 21, '\n');
        string fname(fname_ch);
        fname.erase(fname.find_last_not_of(' ')+1);

        iss.get(lname_ch, 21, '\n');
        string lname(lname_ch);
        lname.erase(lname.find_last_not_of(' ')+1);

        iss.get(phone_ch, 21, '\n');
        string phone(phone_ch);
        phone.erase(phone.find_last_not_of(' ')+1);

        iss >> seat_loc_row >> seat_loc_col >> pass_id;
        Seat new_seat;
        new_seat.setrow(seat_loc_row);
        new_seat.setcolumns(seat_loc_col);

        new_flight.add_passenger(fname, lname, phone, &new_seat, &pass_id);
        cout << new_flight.get_passenger(i).get_pass_id()<< endl;
        i++;
    } 
    read_file.close();
    return new_flight;
}

int main(){
    Flight f = populate_flight_not("flight_info.txt");
    // cout << f.get_passenger(1).get_pass_id() << ' '<< (f.get_passenger(0).get_seat())->getcolumns() << endl;
    return 0;
}