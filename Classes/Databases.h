#pragma once
#include <vector>
#include "BaseClass.h"

class Database {
	


public:
	~Database();
	void Create(Animal::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(Animal::eType type);

private:
	std::vector<Animal*> petShelter;
};
