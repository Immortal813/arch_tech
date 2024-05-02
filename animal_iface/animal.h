#pragma once
#include <iostream>

// Интерфейс для реализация разной информации о животных
class animal
{

public:
	
	virtual std::string voice() = 0;
	virtual std::string size() = 0;
	virtual std::string weight()=0;
	virtual std::string get_name()=0;
	virtual std::string get_info()=0;

	virtual ~animal() {};
	
};

