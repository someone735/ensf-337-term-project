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
void Seat::set_row(int rows) {
    rowsM = rows;
}

void Seat::set_columns(int columns) {
    columnsM = columns;
}

// Getter functions
int Seat::get_row() const {
    return rowsM;
}

int Seat::get_columns() const {
    return columnsM;
}
