#pragma once
#include "animal.h"


class cock:public animal
{
	
private:

	std::string a_name = "cock";


protected:

	
	std::string voice() override { return "Need more bullets!"; }
	std::string size() override { return "Smoll"; }
	std::string weight() override { return "Massive"; }
	std::string get_name() override { return a_name; }

	std::string get_info() override {

		return "Animal name: " + a_name + ", Voice: " + voice() + ", Size: " + size() + ", Weight: " + weight() + "\n";

	}

};

