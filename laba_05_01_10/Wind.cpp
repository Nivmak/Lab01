#include "Wind.h"

Wind::Wind(std::string name, std::string FIO, std::string manufacturer, double cost, size_t amount, std::string defects) :
	Orchestra(name, FIO, manufacturer, cost, amount), defects(defects)
{
}

std::string Wind::data()
{
    return std::string();
}
