#include "Wind.h"

Wind::Wind(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string defects) :
	Orchestra(name, FIO, manufacturer, cost, amount), defects(defects)
{
    std::cout << "Wind\n";
}

Wind::~Wind()
{
    std::cout << "~Wind\n";
}

std::string Wind::data()
{
	return "Wind\n" +
		std::to_string(cost) + "\n" +
		std::to_string(amount) + "\n" +
		name + "\n" +
		FIO + "\n" +
		manufacturer + "\n" +
		defects + "\n";
}

std::string Wind::printData()
{
	return "Духовые: \n\tназвание: " + name +
		"\n\tФИО: " + FIO +
		"\n\tпроизводитель: " + manufacturer +
		"\n\tстоимость: " + std::to_string(cost) +
		"\n\tколичество: " + std::to_string(amount) +
		"\n\tдефекты: " + defects + "\n";
}
