#include <iostream>

int main() {

    int x;  // decleration
    x = 5;  // assignment

    int y = 6;
    int z = 7;

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // integer (whole numer)
    int age = 21;
    int  year = 2023;
    int days = 7;

    // double (number with decimal)
    double price = 10.99;
    double gpa = 4.0;
    double temperature = 25.1;

    // char single character
    char grade = 'A';
    char initial = 'B';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Jason";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << initial << '\n';
    std::cout << name << '\n';

    std::cout << "Hello" << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;
}