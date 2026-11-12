#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "What is the value of the first side of the triangle: \n";
    std::cin >> a;
    
    std::cout << "What is the value of the second side of the triangle: \n";
    std::cin >> b;

    double hypothenuse = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

    std::cout << "The hypothenuse is " << hypothenuse << "\n";

    return 0;
}