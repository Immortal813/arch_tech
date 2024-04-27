#pragma once
#include <iostream>
#include <string.h>
class animal
{

protected:
	virtual std::string voice() = 0;
	virtual std::string size() = 0;
	virtual std::string weight()=0;
	virtual std::string get_name()=0;
	virtual std::string get_info()=0;

	virtual ~animal() {};
	//virtual void test()=0;
};

