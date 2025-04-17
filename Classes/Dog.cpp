#include "Dog.h"

void Dog::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Dog name: ";
	istream >> m_name;
	ostream << "Enter Dog price: ";
	istream >> m_price;
	ostream << "Does the dog bark? (1 for yes, 0 for no): ";
	istream >> m_doesBark;
}

void Dog::Write(std::ostream& ostream)
{
	ostream << "Dog name: " << m_name << std::endl;
	ostream << "Dog price: " << m_price << std::endl;
	ostream << "Does the dog bark? " << (m_doesBark ? "Yes" : "No") << std::endl;
}
