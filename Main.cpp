#include <iostream>
#include <Windows.h>

class StudentClass
{
private:
	std::string name;
	unsigned int age;
	std::string clas;
public:
	void SetData(std::string newName, unsigned int newAge, std::string newClas)
	{
		this->name = newName;
		this->age = newAge;
		this->clas = newClas;
	}
	void GetData()
	{
		std::cout << "Name: " << this->name << std::endl;
		std::cout << "Age: " << this->age << std::endl;
		std::cout << "Clas: " << this->clas << std::endl;
	}
	void Output()
	{
	std::cout << "Class: " << name << std::endl;
	}
	void Input()
	{
		std::cout << "*********************" << std::endl;
		std::cout << "* ADD A NEW STUDENT *" << std::endl;
		std::cout << "*********************" << std::endl;

		std::cout << "Enter Name (Example: Ivan) ";
		std::cin >> this->name;
		std::cout << "Enter Age (Example: 11/24) ";
		std::cin >> this->age;
		std::cout << "Enter Class (Example: 5B/11A) ";
		std::cin >> this->clas;
	}

};

int main()
{
	StudentClass a;

	a.Input();	
	a.GetData();

	return 0;
}
