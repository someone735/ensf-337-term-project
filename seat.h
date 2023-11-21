#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS
    class Seat{
        public:
            Seat();
            Seat(int rows, int columns);
            ~Seat();
            int getrow() const;
            int getcolumns() const;
        private:
            int rowsM;
            int columnsM;
    };
#endif