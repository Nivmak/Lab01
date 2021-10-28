#pragma once
#include <string>
#include <fstream>
#include "List.h"
#include "Orchestra.h"
class Keeper
{
private:
	List<Orchestra*> orchestras;

public:
	void deleteOrchestra(size_t position);
	void addOrchestra(Orchestra* orchestra);
	int saveToFile(std::string file);
	int loadFromFile(std::string file);
	void printAll();
};

