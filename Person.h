#include <iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
	public:
		Person();
		void setName(string);
		string getName();
		void setAge(int);
                int getAge();
};
