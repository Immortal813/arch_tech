#include <iostream>
#include "animal.h"
#include "cock.h"
#include "bulls.h"

int main()
{
    
    std::string animal_name;

    //std::cout << "Hello World!\n";
    std::cout << "Enter animal name: ";
    std::cin >> animal_name;
    bulls b( animal_name );

    std::cout << b.get_info();
}
