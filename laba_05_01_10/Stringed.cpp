#include "Stringed.h"

Stringed::Stringed(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string description) :
	Orchestra(name, FIO, manufacturer, cost, amount), description(description)
{
	std::cout << "Stringed\n";
}

Stringed::~Stringed()
{
	std::cout << "~Stringed\n";
}

std::string Stringed::data()
{
	return "Stringed\n" +
		std::to_string(cost) + "\n" +
		std::to_string(amount) + "\n" +
		name + "\n" +
		FIO + "\n" +
		manufacturer + "\n" +
		description + "\n";
}

std::string Stringed::printData()
{
	return "Струнные: \n\tназвание: " + name +
		"\n\tФИО: " + FIO +
		"\n\tпроизводитель: " + manufacturer +
		"\n\tстоимость: " + std::to_string(cost) +
		"\n\tколичество: " + std::to_string(amount) +
		"\n\tкраткое текстовое описание: " + description + "\n";
}
