# include <iostream>
# include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

using float_t = float;

int main(){

    pairlist_t pairlist;
    
    text_t firstName = "Jason";
    std::cout << firstName << "\n";

    number_t age = 21;
    std::cout << age << "\n";

    float_t height = 10.4;
    std::cout << height << "\n";

    return 0;
}