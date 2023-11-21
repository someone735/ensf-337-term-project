#include "seat.h"

Seat::Seat(){

}

Seat::Seat(int rows, int columns){
    rowsM = rows;
    columnsM = columns;
}

int Seat::getcolumns() const{
    return columnsM;
}

int Seat::getrow() const{
    return rowsM;
}