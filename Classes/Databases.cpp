#include "Databases.h"
#include "Dog.h"
#include "Cat.h"

Database::~Database()
{
	for (Animal* animal : petShelter)
	{
		delete animal;
	}
	petShelter.clear();
}

void Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;
	switch (type)
	{
	case Animal::eType::CAT:
		animal = new Cat;
		break;
	case Animal::eType::DOG:
		animal = new Dog;
		break;
	case Animal::eType::BIRD:
		break;
	default:
		break;
	}
	animal->Read(std::cout, std::cin);
	petShelter.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal* animal : petShelter)
	{
		animal->Write(std::cout);
	}
}

void Database::Display(const std::string& name)
{
	for (Animal* obj : petShelter)
	{
		if (obj->GetName() == name)
		{
			obj->Write(std::cout);
		}
	}
}

void Database::Display(Animal::eType type)
{
	for (Animal* obj : petShelter)
	{
		if (obj->GetType() == type)
		{
			obj->Write(std::cout);
		}
	}
}
