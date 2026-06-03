#include <iostream>

int main(){

for(int i = 0; i < 10; i++){
    if(i == 0 || i == 9){
        std::cout << "*";
    }
    else{
        std::cout << "-";
    }
}

std::cout << std::endl;

for(int i = 0; i < 4; i++){

    for(int i = 0; i < 10; i++){
    if(i == 0 || i == 9){
        std::cout << "|";
    }
    else{
        std::cout << " ";
    }
}

std::cout << std::endl;

}

for(int i = 0; i < 10; i++){
    if(i == 0 || i == 9){
        std::cout << "*";
    }
    else{
        std::cout << "-";
    }
}


}

// for(int i = 0; i < 10; i++){
//     if(i == 0 || i == 9){
//         "|"
//     }
//     else{
//         " "
//     }
// }

// for(int i = 0; i < 10; i++){
//     if(i == 0 || i == 9){
//         "|"
//     }
//     else{
//         " "
//     }
// }