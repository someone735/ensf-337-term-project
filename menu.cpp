#include<vector>
#include<string>
#include <iostream>
using namespace std;

int main(){
    cout << "Version 1.0" << endl;
    cout << "Term Project - Flight Management Program in C++" << endl;
    cout << "Produced by: Guntaas Uppal, John Tumacder, Noor ul Islam, Syed Waliullah" << endl;
    cout << "Year: 2023" << endl;
    while(1){
    string s = "asdf";
    cout << "Press return to continue" << endl;
    cin >> s;
    cout << "select option: 1, 2, 3, 4, 5, 6" << endl;
    int x = 0;
    x = 0;
    cin>>x;
    if (x != 1 || x != 2 || x != 3 || x != 4 || x != 5 || x != 6){
        cout<<"hi"<<endl;
        break;
    }
    break;
    }
}

void testing(){
    Flight f;
    displayHeader();
    f = populate_flight("");
    int choice = 1;
    while (choice != 0){
        switch(menu()){
            case 1:
                f.show_seat_map()
                pressEnter();
                break;
            case 2:
                displayPassenger();
                pressEnter();
                break;
            case 3:
                addPassenger();
                pressEnter();
                break;
            case 4:
                removePassenger();
                pressEnter();
                break;
            case 5:
                saveData();
                pressEnter();
                break;
            case 6:{
                saveData();
                pressEnter();
                break;
            }
        }
    }
}