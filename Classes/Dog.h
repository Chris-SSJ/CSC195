#pragma once
#include <iostream>
#include <string>
#include "BaseClass.h"

 class Dog : public Animal {
 public:
	 Dog() {
		 std::cout << "Dog constructor\n";
	  }

	 void Read(std::ostream& ostream, std::istream& istream) override;
	 void Write(std::ostream& ostream) override;
	 eType GetType() override { return eType::DOG; } // or DOG

 private:
	 bool m_doesBark = true;
};
