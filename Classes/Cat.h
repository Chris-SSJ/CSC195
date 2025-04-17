#pragma once
#include <iostream>
#include <string>
#include "BaseClass.h"


class Cat : public Animal {

public:
	Cat() {
		std::cout << "Cat constructor\n";
	}
    void Read(std::ostream& ostream, std::istream& istream) override;

	void Write(std::ostream& ostream)override;
    eType GetType() override { return eType::CAT; }

    
	

private:
	unsigned short m_whiskers = 0;
};


