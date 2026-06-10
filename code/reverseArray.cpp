// Write a function that takes in an array and reverse the content of that array

#include <iostream>

void printArray(int someArray[], int length){

    for(int i =0; i < length; i++){
        std::cout << someArray[i] << " ";
    }
    std::cout << std::endl;

}

void reverse(int arr[], int length){
    
    int temp;
    int tail = length - 1;

    for(int i = 0; i < length/2; i++){

        temp = arr[tail];
        arr[tail] = arr[i];
        arr[i] = temp;

        tail --;
    }
}

int main(){

    int myArray[] = {1, 2, 3, 4, 5};

    printArray(myArray, 5);

    reverse(myArray, 5);

    printArray(myArray, 5);

    // 5 4 3 2 1

    return 0;
}