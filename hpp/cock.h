#pragma once
#include "animal.h"

// Класс животного петух, наследующий все виртуальные методы от интерфейса animal
class cock:public animal
{
	
private:

	std::string a_name = "cock";


protected:
	// Переопределение методов
	// Возвращает строку содержащую информацию о животном
	std::string voice() override { return "Need more bullets!"; }
	std::string size() override { return "Smoll"; }
	std::string weight() override { return "Massive"; }
	std::string get_name() override { return a_name; }
	// Предоставление полной инормации о животном
	std::string get_info() override {

		return "Animal name: " + a_name + ", Voice: " + voice() + ", Size: " + size() + ", Weight: " + weight() + "\n";

	}

};

