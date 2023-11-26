#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS
    class Seat{
        public:
            Seat();
            ~Seat();
            Seat(const Seat& src);

            void set_row();
            void set_colums();

            int get_row() const;
            int get_columns() const;
        private:
            int rowsM;
            int columnsM;
    };
#endif