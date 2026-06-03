#include <iostream>

bool isPrime(int p){
    for(int i = 2; i < p; i++){
        if(p % i == 0){
            return false;
        }
    }
    return true;
}

int highestPrime(int someNumber){

    int highestPrime;

    for(int i = someNumber; i > 0; i--){

        if(isPrime(i)){

            highestPrime = i;
            break;
        }
    }

    return highestPrime;

}

int main(){


    std::cout << highestPrime(20);



    return 0;
}