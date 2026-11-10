#include <iostream>

int main(){

    double students = 20;

    students += 1;

    students++;
    
    students -= 1;

    students--;

    students = students * 2;

    students *= 2;

    students = students/2;

    students /= 2;

    std::cout << students << std::endl;
    
    int new_students = 10;
    int remainder = new_students % 3;

    std::cout << new_students << std::endl;

    int student = 6 - 5 + 4 * 3 / 2;

    std::cout << student <<"\n";

    return 0;

}