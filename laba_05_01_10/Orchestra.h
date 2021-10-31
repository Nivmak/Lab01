#pragma once
#include <iostream>
#include <string>
class Orchestra
{
protected:
	std::string name, FIO, manufacturer;
	double cost;
	size_t amount;

public:
	Orchestra(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount) :
		name(name), FIO(FIO), manufacturer(manufacturer), cost(cost), amount(amount) {std::cout << "Orchestra\n";}
	virtual ~Orchestra() { std::cout << "~Orchestra\n"; }
	virtual std::string data() = 0;
	virtual std::string printData() = 0;
};

