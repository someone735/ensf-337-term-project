#include<vector>
#include<string>
#include <iostream>
// #include "flight.h"
using namespace std;

void pressEnter();
int main(){
    cout << "Version 1.0" << endl;
    cout << "Term Project - Flight Management Program in C++" << endl;
    cout << "Produced by: Guntaas Uppal, John Tumacder, Noor ul Islam, Syed Waliullah" << endl;
    cout << "Year: 2023" << endl;
    int x = 0;

    pressEnter();
    while(1){
        cout << "Please select one of the following options:" << endl;
        cout << "1. Display Flight Seat Map" << endl;
        cout << "2. Display Passengers Information" << endl;
        cout << "3. Add a new Passenger" << endl;
        cout << "4. Remove an Existing Passenger" << endl;
        cout << "5. Save data" << endl;
        cout << "6. Quit" << endl << endl;
        cout << "Select option: 1, 2, 3, 4, 5, 6" << endl;
        cin >> x;
        int input = x -'0';
        switch(x){
            case 1:
                pressEnter();
                break;
            case 2:
                pressEnter();
                break;
            case 3:
                pressEnter();
                break;
            case 4:
                pressEnter();
                break;
            case 5:
                pressEnter();
                break;
            case 6:
                pressEnter();
                break;
            default:
                x = '0';
                cout << "Invalid input" << endl;
                break;
        }
    }
}
#if 0
    // void testing(){
    //     Flight f;
    //     displayHeader();
    //     f = populate_flight("flight.txt");
    //     int choice = 1;
    //     while (choice != 0){
    //         switch(menu()){
    //             case 1:
    //                 f.show_seat_map()
    //                 pressEnter();
    //                 break;
    //             case 2:
    //                 displayPassenger();
    //                 pressEnter();
    //                 break;
    //             case 3:
    //                 addPassenger();
    //                 pressEnter();
    //                 break;
    //             case 4:
    //                 removePassenger();
    //                 pressEnter();
    //                 break;
    //             case 5:
    //                 saveData();
    //                 pressEnter();
    //                 break;
    //             case 6:{
    //                 saveData();
    //                 pressEnter();
    //                 break;
    //             }
    //         }
    //     }
    // }
#endif

void pressEnter(){
    cout << "Press Enter to Continue" << endl;
    cin.ignore();
}

