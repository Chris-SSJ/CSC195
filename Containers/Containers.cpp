
#include <iostream>;
#include <array>;
#include <vector>;
#include <list>;
#include <stack>;
#include <map>;
using namespace std;


int main() {
	//int i = 0xff;
	//array
	array<int,5> a = { 1,2,3,4,5};
	cout << a.size() << endl;
	for (int i = 0; i < a.size();i++) {
		cout << a[i] << endl;
	}

	//Vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	//List
	list<int> list = { 1,2,3,4,5 };
	list.push_back(6);
	list.insert(list.begin(), 0);

	//Map
	map<string, int>m;
	m["riley"] = 46;
	m["James"] = 23;
	m["maple"] = 200;

	cout << m["riley"] << endl;


	//cout << &i << endl;
	//cout << (void*)(&a[0]) << endl;
	//cout << (void*)(&a[1]) << endl;

	//cout << "Bau Bau" << endl;
	return 0;
}