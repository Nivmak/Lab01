#pragma once
#include <string>
class Orchestra
{
protected:
	std::string name, FIO, manufacturer;
	double cost;
	size_t amount;

public:
	Orchestra(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount) :
		name(name), FIO(FIO), manufacturer(manufacturer), cost(cost), amount(amount) {}
	virtual std::string data() = 0;

};

