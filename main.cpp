#include <iostream>
#include "People.h"

int main() {

    People const people1{23, "Bob"};
    People const people2{24, "Alice"};
    People people3{};
    people3 = people1;
    people3 = {23, "Trudy"};
    People const people5 = people3;
    People const people4{people2};
    std::cout << people1.GetAge() << std::endl;
    std::cout << people2.GetAge() << std::endl;
    std::cout << people3.GetAge() << std::endl;
    std::cout << people4.GetAge() << std::endl;
    return 0;
}