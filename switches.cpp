#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        default:
            std::cout << "Please enter a vaid month number!";
    }


    char grade;
    std::cout << "What letter grade?: \n";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!\n";
            break;
        case 'B':
            std::cout << "You did good!\n";
            break;
        case 'C':
            std::cout << "You did okay!\n";
            break;
        case 'D':
            std::cout << "You did not do good!\n";
            break;
        case 'F':
            std::cout << "You failed!\n";
            break;
        default:
            std::cout << "Please enter only valid grades!\n";
    }

    return 0;
}