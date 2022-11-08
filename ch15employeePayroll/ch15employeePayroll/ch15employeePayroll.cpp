// ch15employeePayroll.cpp
//

//Create a C++ project that determines payroll for hourly and salaried employees

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
	

class Employee
{
public:
	Employee(int id, string first, string last, double pay)
		: employeeID(id), firstName(first), lastName(last), grossPay(pay) {}
	virtual void calcPay() = 0;
	virtual void display() = 0;
protected:
	int employeeID;
	string firstName;
	string lastName;
	double grossPay;
};

//subclasses

class HourlyEmployee : public Employee
{
public:
	HourlyEmployee(int id, string first, string last, double rate, double hours)
		: Employee(id, first, last, rate), hoursWorked(hours), hourlyRate(rate) {}
	void calcPay();
	void display();
private:
	double hoursWorked;
	double hourlyRate;
};

class SalariedEmployee : public Employee
{
public:
	SalariedEmployee(int id, string first, string last, double pay)
		: Employee(id, first, last, pay) {}
	void calcPay();
	void display();
};


int main()
{
    cout << "Ch. 15 Payroll by Kevin Bell\n\n";
	
	//create objects
	HourlyEmployee emp1(987, "Mary", "Lamb", 10.00, 45);
	SalariedEmployee emp2(1234, "Ann", "Adams", 52000.00);
	HourlyEmployee emp3(654, "Don", "Dodson", 8.50, 30);
	SalariedEmployee emp4(5678, "Bob", "Benson", 75000.00);
	
	//calculate pay
	emp1.calcPay();
	emp2.calcPay();
	emp3.calcPay();
	emp4.calcPay();
	
	//display results
	emp2.display();
	cout << endl;
	emp4.display();
	cout << endl;
	emp1.display();
	cout << endl;
	emp3.display();
	cout << endl;
	
	system("pause");
	return 0;
} //end main

void HourlyEmployee::calcPay()
{
	if (hoursWorked > 40)
		grossPay = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
	else
		grossPay = hoursWorked * hourlyRate;
}

void HourlyEmployee::display()
{
	cout << "Emp #" << employeeID << ", " << firstName << " " << lastName << endl;
	cout << "Hourly, rate = $" << hourlyRate  << ", hours = " << hoursWorked << endl;
	cout << "Gross pay = $" << grossPay << endl;
}

void SalariedEmployee::calcPay()
{
	grossPay = grossPay / 26;
}

void SalariedEmployee::display()
{
	cout << "Emp # " << employeeID << ", " << firstName << " " << lastName << endl;
	cout << "Salaried, annual pay = $" << grossPay * 26 << endl;
	cout << "Gross pay = $" << grossPay << endl;
}
