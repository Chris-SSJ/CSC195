#pragma once
#include "string";
void f();

class Student{

public:
	Student() {

	}
	Student(std::string name) {
		this->m_name = name;
	}
	void write();
	std::string getName() {
		return m_name; }

	void setName(std::string name){
		m_name = name; }

private:
	std::string m_name;


};
