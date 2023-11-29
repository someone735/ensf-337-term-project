#include "seat.h"

// Default Constructor
Seat::Seat() : rowsM(0), columnsM(0) {}

// Destructor
Seat::~Seat() {
}

// Copy Constructor
Seat::Seat(const Seat& src) : rowsM(src.rowsM), columnsM(src.columnsM) {
}

// Setter functions
void Seat::setrow(int rows) {
    rowsM = rows;
}

void Seat::setcolumns(int columns) {
    columnsM = columns;
}

// Getter functions
int Seat::getrow() const {
    return rowsM;
}

int Seat::getcolumns() const {
    return columnsM;
}