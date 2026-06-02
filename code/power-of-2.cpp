#include <iostream>

// Write a while loop to print the first 17 powers of 2 (2^0, 2 ^1 .... 2^16)

int main(){

    int exp = 0;
    int value = 0;

    while (exp <= 16){

        if(exp == 0){
            value = 1;
            std::cout << value << " ";
        }
        else{

            value *= 2;
            std::cout << value << " ";
            // value = value * 2;
        }

        exp++;

    }

    



    
}