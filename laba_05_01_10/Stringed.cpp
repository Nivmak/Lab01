#include "Stringed.h"

Stringed::Stringed(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string description) :
	Orchestra(name, FIO, manufacturer, cost, amount), description(description)
{
}

std::string Stringed::data()
{
	return std::string();
}
