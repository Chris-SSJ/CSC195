#include "Student.h"
#include <iostream>

void f() {
    std::cout << "Hello\n";
}
void Student::write() {
    std::cout << m_name << std::endl;
}