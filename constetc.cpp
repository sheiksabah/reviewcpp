#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    using namespace first;
    using namespace std;

    const double PI = 3.14159;
    double radius = 10;
    double circumference =  2 * PI * radius;
    const int LIGHT_SPEED = 299792458;
    const int HEIGHT = 1080;
    cout << circumference << " cm" << "\n";

    int x = 0;

    cout << x << "\n";
    cout << second::x << "\n";


    return 0;
}

