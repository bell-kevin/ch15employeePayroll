# ch15employeePayroll

Create a C++ project that determines payroll for hourly and salaried employees. Start with a base class for Employee, which has member variables for employee ID, first name and last name of that employee, and gross pay. The Employee class has 2 pure virtual functions: calcPay() and display(). The calcPay() function determines the gross pay for an employee, following the usual rules -- salaried employees have an annual salary and gross pay for this pay period is that salary divided by 26; hourly employees have a pay rate and number of hours worked, and if they worked more than 40 hours, they get paid time and a half for those overtime hours. The display() function displays information about the employee and their gross pay. 

Create subclasses from the Employee class for Hourly and Salaried employees. What is specific to an hourly employee that an annual employee doesn't have? Hourly rate and hours worked. What is specific to a salaried employee that an hourly employee doesn't have? Annual salary. Be sure to use the base class constructor for those variables that both classes have in common.

In the main function, you're going to directly code the necessary information for 4 employees, rather than asking the user for the names, rates and hours. Use the information in the table below. Instantiate 2 salaried employees and 2 hourly employees. For each employee, call the calcPay() and display() functions.

Employee	Employee ID	Salary/Hourly Rate	Hours

Ann Adams	 1234	 $52,000	

Bob Benson	 5678	 $75,000

Mary Lamb	  987	 $10.00	 45

Don Dodson   	  654	 $8.50 	 30

Here is the outcome of running that code:

![Ch 15 Payroll running](https://github.com/bell-kevin/ch15employeePayroll/blob/main/ch15payroll.PNG)

Be sure to make the Employee class abstract by writing calcPay() and display() as pure virtual methods.

Take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
