#pragma once
#include "animal.h"
#include <string.h>

class bulls :public animal
{

private:
	std::string a_name = "bulls";

public:


	std::string voice() override { return "EeeBoy"; }
	std::string size() override { return "Huge"; }
	std::string weight() override { return "Massive"; }
	std::string get_name() override { return a_name; }

	std::string get_info() override {

		return "Animal: " + a_name + ", Voice: " + voice() + ", Size: " + size() + ", Weight: " + weight() + "\n";

	}

};

