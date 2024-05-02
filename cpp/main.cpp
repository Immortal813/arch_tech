#include <iostream>
// Использование макроса реализованного в Builder.h, закрывающий доступ к ненужным файлам
#define inHead
#include "Builder.h"

// Главная функия, возвращает int, принимает ничего
int main()
{
	// Создание указателя на класс Builder
	Builder *bui = new Builder;
	// Ам
	animal *am ;
	// Строка хранящая имя животного введенного пользователем  
	std::string animal_name;

	// Бесконечный цикл
	while ( true ) {
		// Вывод на экран надписи "For the exit type \"exit\" or \"end\"\nEnter animal name: "
		std::cout << "For the exit type \"exit\" or \"end\"\nEnter animal name: ";
		// Ожидание ввода с клавиатуры от пользователя
		std::cin >> animal_name;
		// Проверка того, что ввел пользователь
		if ( animal_name == "exit" || animal_name == "end" )
			break;
		// Присваиваем указателю на виртуальный класс адрес нужного "животного"
		am = bui->creat( animal_name );
		// Проверка на нулевой указатель
		if ( am != nullptr ) {
			// Выводим на экран информацию о нужном животном
			std::cout << am->get_info();
			// Освобождаем память
			delete am;

		}
		// Иначе
		else
			// Вывод на экран надписи "Incorrect animal name"
			std::cout << "Incorrect animal name!\n";


	}
	// Вывод на экран надписи "GL HF! Have a nice day"
	std::cout << "GL HF! Have a nice day!\n";
	// Возвращаем ноль
	return 0;
}
