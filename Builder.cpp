#include "Builder.h"

animal *Builder::creat( std::string name_am ) {

	animal *sasha = nullptr;

	if ( name_am == "bulls" ) {
		
		sasha = new bulls();
	
	}
	else if ( name_am == "cock" ) {
	
		sasha = new cock();
	
	}
	

	return sasha;

}