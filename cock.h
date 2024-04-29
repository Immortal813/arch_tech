#pragma once
#include "animal.h"
#include "bulls.h"

class cock:public animal
{
	
private:

	std::string a_name = "cock";


public:


	std::string voice() override { return "cock"; }
	std::string size() override { return "Smoll"; }
	std::string weight() override { return "Massive"; }
	std::string get_name() override { return a_name; }

	std::string get_info() override {

		return "Animal: " + a_name + ", Voice: " + voice() + ", Size: " + size() + ", Weight: " + weight() + "\n";

	}



};

