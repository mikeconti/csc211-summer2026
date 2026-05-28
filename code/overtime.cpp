#include <iostream>

// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and the special rate of $50 for the remaining hours
// prints the calculated payment

int main(){

    int hours;

    std::cout << "How many hours did you work ?" << std::endl;

    std::cin >> hours;

    if(hours <= 40 ){
        std::cout << "Your made " << hours * 35 << " this week! " << std::endl;
    }

    else if(hours > 40){

        int flatPay = 40 * 35;

        int overtime = hours - 40;

        std::cout << "Your made " << flatPay + (overtime * 50)  << " this week! " << std::endl;

    }

    return 0;
}