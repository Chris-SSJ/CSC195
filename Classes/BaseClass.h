#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	enum class eType
	{
		CAT,
		DOG,
		BIRD
	}; 


	virtual void Read(std::ostream& ostream, std::istream& istream) = 0;

	virtual void Write(std::ostream& ostream) = 0;
	std::string GetName() {
		return m_name;
	}
	virtual eType GetType() = 0;

protected:
	std::string m_name;
	unsigned short m_price;
};
