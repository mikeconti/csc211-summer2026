#include <iostream>

//Write a single for loop that prints out the first 50 numbers

int main(){

    int printout = 0;    

    for(int i = 0; i < 50; i++){ // i = LCV (loop control var)

        std::cout << " " << printout;
        printout += 2;
        
    }

    std::cout << std::endl;

    for(int i = 0; i < 100; i++){ 

        if(i % 2 == 0){
            std::cout << " " << i; 
        }
        
    }

    return 0;
}