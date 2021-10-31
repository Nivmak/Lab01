#include "Keeper.h"

Keeper::Keeper()
{
	std::cout << "Keeper\n";
}

Keeper::~Keeper()
{
	std::cout << "~Keeper\n";
}

void Keeper::deleteOrchestra(size_t position)
{
	delete orchestras.pop(position);
}

void Keeper::addOrchestra(Orchestra* orchestra)
{
	orchestras.push_back(orchestra);
}

int Keeper::saveToFile(std::string file)
{
	std::ofstream fout(file);
	if (!fout) return 0;
	fout << to_string(orchestras.size()) << std::endl;
	for (size_t i = 0; i < orchestras.size(); ++i)
		fout << orchestras[i]->data();

	fout.close();
	return 1;
}

int Keeper::loadFromFile(std::string file)
{
	std::ifstream fin(file);
	if (!fin) return 0;

	std::string type, name, FIO, manufacturer, temp;
	double cost;
	size_t amount, orchestraAmount;

	fin >> orchestraAmount;
	for (size_t i = 0; i < orchestraAmount; i++)
	{
		fin >> type;
		fin >> cost;
		fin >> amount;
		getline(fin, name);
		getline(fin, name);
		getline(fin, FIO);
		getline(fin, manufacturer);
		getline(fin, temp);
		if (type == "Drums")
			orchestras.push_back(new Drums(name, FIO, manufacturer, cost, amount, temp));
		else if (type == "Stringed")
			orchestras.push_back(new Stringed(name, FIO, manufacturer, cost, amount, temp));
		else if (type == "Wind")
			orchestras.push_back(new Wind(name, FIO, manufacturer, cost, amount, temp));
	}
	return 1;
}

size_t Keeper::orchestraSize()
{
	return orchestras.size();
}

void Keeper::printAll()
{
	for (size_t i = 0; i < orchestras.size(); i++)
		std::cout << "Оркестр №" << i + 1 << ":\n" << orchestras[i]->printData();
}
