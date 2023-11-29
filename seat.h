#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS
#include <string>
using namespace std;
    class Seat{
        public:
            Seat();
            ~Seat();
            Seat(const Seat &src);

            void setrow(int rows);
            void setcolumns(int columns);
            void setseat_status(string input);

            int getrow() const;
            int getcolumns() const;
            string get_seat_status() const;

        private:
            int rowsM;
            int columnsM;
            string seat_status;
    };
#endif