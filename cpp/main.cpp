#include <iostream>
#include "Builder.h"

int main()
{

	Builder bui;
	animal *am;

	std::string animal_name;


	while ( true ) {

		std::cout << "For the exit type \"exit\" or \"end\"\nEnter animal name: ";
		std::cin >> animal_name;

		if ( animal_name == "exit" || animal_name == "end" )
			break;

		am = bui.creat( animal_name );
		if ( am != nullptr ) {

			std::cout << am->get_info();
			delete am;

		}
		else
			std::cout << "Incorrect animal name!\n";


	}

	std::cout << "GL HF! Have a nice day!\n";
	return 0;
}
