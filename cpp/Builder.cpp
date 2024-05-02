#include "Builder.h"


animal *Builder::creat( std::string name_am ) {

	animal *sasha = nullptr;
	// Если пользователь ввел имя Быкъ
	// Создаем указатель на экземпляр класса 
	if ( name_am == "bulls" ) {
		
		sasha = new bulls();
	
	}
	// Если пользователь ввел имя Петухъ
	// Создаем указатель на экземпляр класса 
	else if ( name_am == "cock" ) {
	
		sasha = new cock();
	
	}
	// Возвращаем указатель
	return sasha;

}