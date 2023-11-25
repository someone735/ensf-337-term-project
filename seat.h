#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS
    class Seat{
        public:
            Seat();
            ~Seat();
            Seat(Seat &src);

            void setrow();
            void setcolums();

            int getrow() const;
            int getcolumns() const;
        private:
            int rowsM;
            int columnsM;
    };
#endif