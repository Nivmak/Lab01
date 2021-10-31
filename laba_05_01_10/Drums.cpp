#include "Drums.h"

Drums::Drums(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string type) :
	Orchestra(name, FIO, manufacturer, cost, amount), type(type)
{
	std::cout << "Drums\n";
}

Drums::~Drums()
{
	std::cout << "~Drums\n";
}

std::string Drums::data()
{
	return "Drums\n" +
		std::to_string(cost) + "\n" +
		std::to_string(amount) + "\n" +
		name + "\n" +
		FIO + "\n" +
		manufacturer + "\n" +
		type + "\n";
}

std::string Drums::printData()
{
	return "�������: \n\t��������: " + name +
		"\n\t���: " + FIO +
		"\n\t�������������: " + manufacturer +
		"\n\t���������: " + std::to_string(cost) +
		"\n\t����������: " + std::to_string(amount) +
		"\n\t���: " + type + "\n";
}
	