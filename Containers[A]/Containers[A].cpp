

#include <iostream>
#include <array>;
#include <vector>;
#include <map>
#include <list>
using namespace std;

int main()
{
	//Array
	array<string, 7> daysOfWeek = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	//Prints the daysOfWeek
	for (int i = 0; i < daysOfWeek.size(); i++) {
		cout << daysOfWeek[i] << endl;
	}
	cout << "  " << endl;

	//Vector
	vector<int> vec = { 1,2,3,4,5 };
	//Adds 6 & 7 to the vector
	vec.push_back(6);
	vec.push_back(7);
	//Prints the vector from 1-7
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	cout << " " << endl;
	//removes 7 from the vector
	vec.pop_back();
	//Prints the vector from 1-6
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	cout << " " << endl;

	//List
	list<string> fruits = { "Apple","Kiwi","Mango" };
	//Adds Oragne to the front
	fruits.push_front("Orange");
	//Adds Strawberry to the back
	fruits.push_back("Strawberry");
	//Removes kiwi from the list of furits
	fruits.remove("Kiwi");


	for (list<string>::iterator it = fruits.begin(); it != fruits.end(); ++it) {
		cout << *it << endl;
	}

	cout << " " << endl;

	//Map
	map<string, int> products;

	products["Apple"] = 10;
	products["Mango"] = 30;
	products["Kiwi"] = 8;

	cout << products["Kiwi"] << endl;
	

	cout << " " << endl;

	//Changes the value of kiwi to 20
	products["Kiwi"] = 20;
	//prints the prodcuts and it's value
	cout << products["Apple"] << endl;
	cout << products["Mango"] << endl;
	cout << products["Kiwi"] << endl;
	cout << " " << endl;

	for (map<string, int>::iterator it = products.begin(); it != products.end(); ++it) {
		cout << it->first << " = " << it->second << endl;
	}





}


