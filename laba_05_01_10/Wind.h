#pragma once
#include <string>
#include "Orchestra.h"
class Wind :
    public Orchestra
{
private:
	std::string defects;

public:
	Wind(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string defects);
	~Wind();
	std::string data();
	std::string printData();
};

