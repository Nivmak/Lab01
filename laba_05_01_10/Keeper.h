#pragma once
#include <string>
#include <fstream>
#include "List.h"
#include "Orchestra.h"
#include "Drums.h"
#include "Stringed.h"
#include "Wind.h"
class Keeper
{
private:
	List<Orchestra*> orchestras;

public:
	Keeper();
	~Keeper();
	void deleteOrchestra(size_t position);
	void addOrchestra(Orchestra* orchestra);
	int saveToFile(std::string file);
	int loadFromFile(std::string file);
	size_t orchestraSize();
	void printAll();
};

