#include "Cat.h"

void Cat::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Cat name: ";
	istream >> m_name;
	ostream << "Enter Cat price: ";
	istream >> m_price;
	ostream << "Enter Cat whiskers: ";
	istream >> m_whiskers;
}

void Cat::Write(std::ostream& ostream)
{
	ostream << "Cat name: " << m_name << std::endl;
	ostream << "Cat price: " << m_price << std::endl;
	ostream << "Cat whiskers: " << m_whiskers << std::endl;
}
