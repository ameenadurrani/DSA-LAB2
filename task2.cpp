#include <iostream>
#include <string>
using namespace std;
class Employee 
{
public:
	virtual double calculateSalary() const = 0;
	virtual ~Employee() {};
};

class FullTimeEmployee : public Employee 
{
private:
	string name;
	double fixedSalary;

public:
	FullTimeEmployee(const std::string& empName, double salary)
		: name(empName), fixedSalary(salary) {} 

	double calculateSalary() const 
	{
		return fixedSalary; 
	}

	void display() const 
	{
		cout << "Full-Time Employee: " << name << ", Salary: " << calculateSalary() << endl;
	}
};

class PartTimeEmployee : public Employee
{
private:
	string name;
	double hourlyRate;
	int hoursWorked;

public:
	PartTimeEmployee(const std::string& empName, double rate, int hours)
		: name(empName), hourlyRate(rate), hoursWorked(hours) {}

	double calculateSalary() const 
	{
		return hourlyRate * hoursWorked; // Salary based on hours worked
	}

	void display() const 
	{
		cout << "Part-Time Employee: " << name << ", Salary: " << calculateSalary() << endl;
	}
};

int main()
{
	string empnmame;
	cout << "Enter the name of Employee: ";
	cin >> empnmame;
	FullTimeEmployee fullTimeEmp(empnmame, 50000); //here salary is fixed
	fullTimeEmp.display();

	string empnmame1;
	cout << "Enter the name of Employee: ";
	cin >> empnmame1;
	double hourlyRate;
	int hoursWorked;
	cout << "Enter the hourly rate of the employee: ";
	cin >> hourlyRate;
	cout << "enter the number of hours employee worked: ";
	cin >> hoursWorked;
	PartTimeEmployee partTimeEmp(empnmame, hourlyRate, hoursWorked); 
	partTimeEmp.display();

	return 0;
}
