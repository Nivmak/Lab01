#pragma once
#include <string>
#include "Orchestra.h"
class Stringed :
    public Orchestra
{
private:
	std::string description;

public:
	Stringed(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string description);
	~Stringed();
	std::string data();
	std::string printData();
};

