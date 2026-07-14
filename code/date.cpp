#include <iostream>

class Date {
    private:
        int month = 01;
        int year = 1970;
        int day = 01;

    public:
        
        void set(int m, int d, int y);
        void print();

        void addYears(int someYear);
        void addMonths(int someMonth);
        void addDay(int someDay);

};

void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}

void Date::addYears(int someYear){
    year+=someYear;

}

void Date::addMonths(int someMonth){
    month+=someMonth;

}
void Date::addDay(int someDay){
    day+=someDay;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}


int main(){

    Date today;

    today.set(11, 04, 2023);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}