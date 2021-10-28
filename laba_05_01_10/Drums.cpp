#include "Drums.h"

Drums::Drums(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string type) :
	Orchestra(name, FIO, manufacturer, cost, amount), type(type)
{
}

std::string Drums::data()
{
	return std::string();
}
