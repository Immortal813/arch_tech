#pragma once
#include <iostream>
class animal
{

protected:
	virtual void voice()=0;
	virtual void size()=0;
	virtual void weight()=0;
	virtual void get_name()=0;
	virtual void get_info()=0;
};

