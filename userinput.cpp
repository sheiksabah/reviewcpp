#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "What's your age?: \n";
    std::cin >> age;

    std::cout << "What's your full name?: \n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old.\n";

    return 0;
}