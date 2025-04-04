// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Student.h";
#include <iostream>;
#include <string>;
using namespace std;

class Person{
public:
    float weight;
    int age;
    void f(){}
};

int main(){
    Student student;
    student.setName("Issac");
    student.write();


    Person person;
    person.age = 19;

    unsigned int i = 99;
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
    cout << sizeof(Person) << endl;
    //printf("%d\n", i);

    i++;
    cout << i << endl;


    char c = 'A';
    cout << &i << endl;

    f();


    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}


