#pragma once
#include <string>
#include "Orchestra.h"
class Drums :
    public Orchestra
{
private:
	std::string type;

public:
	Drums(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string type);
	~Drums();
	std::string data();
	std::string printData();
};

