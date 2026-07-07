// Write a Student struct that contains
    // Name
    // StudentID
    // Major
// Implement functions:
    // void buildStudent(Student &someStudent)
        // Initialize member variables of student Struct    
    //   void changeMajor(Student &someStudent);
        // Change the major of a student structure
    // void printStudent(Student &someStudent);
        // Prints out all member variables of student structure 
#include <iostream>


    struct Student{

        std::string name;
        std::string major;
        int ID; //1004694323

    };

void buildStudent(Student &someStudent){

    std::cout << "Enter name " << std::endl;

    std::cin >> someStudent.name;

    std::cout << "Enter major " << std::endl;

    std::cin >> someStudent.major;

    std::cout << "Enter ID " << std::endl;

    std::cin >> someStudent.ID;

}

void printStudent(Student &someStudent){
    std::cout << "Name = " << someStudent.name << std::endl;
    std::cout << "Major = " << someStudent.major << std::endl;
    std::cout << "ID = " << someStudent.ID << std::endl;
}

int main(){

    Student Jon;

    buildStudent(Jon);
    std::cout << std::endl;
    printStudent(Jon);
}