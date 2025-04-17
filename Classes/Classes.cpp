
#include "Dog.h"
#include "Cat.h"
#include "Databases.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	Database database;
    bool quit = false;
    while (!quit)
    {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice){
        case 1: std::cout << "1. Add Dog\n";
            std::cout << "2. Add Cat\n";
            unsigned short type;
            std::cin >> type;
            database.Create(static_cast<Animal::eType>(type - 1));
            break;
        case 2: database.DisplayAll();
            break;
        case 3:
        {
            std::cout << "Seach up by name" << std::endl;
            std::string nameInput;
            std::cin >> nameInput;
            database.Display(nameInput);
            break;
        }
        case 4:
        {
            std::cout << "Enter type (0 for Cat, 1 for Dog): ";
            int t;
            std::cin >> t;
            database.Display(static_cast<Animal::eType>(t)); 
            break;
        }
        case 5:
            quit = true;
            break;
        }
    }
}


