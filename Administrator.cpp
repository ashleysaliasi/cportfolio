/*
Employee
Ashley Saliasi
04/13/2022
*/
/* Implement Administrator class */
#include <iostream>
#include <string>
#include "Administrator.h"
#include "Employee.h"
using namespace std;

// ToDo: implement the default constructor, remember to call base class constructor
Administrator::Administrator():SalariedEmployee( ), bonus(0), title()
{

}

// ToDo: implement the constructor, remember to call base class constructor
Administrator::Administrator(string the_name, string the_SSN, double the_salary, string the_title, double the_bonus): SalariedEmployee(the_name, the_SSN, the_salary), title(the_title), bonus(the_bonus)

{
	// deliberately empty
	cout << "Adminstrator(" << the_name << "," << the_SSN << "," << the_salary << "," << the_title << "," << the_bonus << ")\n"; 
}


// ToDo: implement accessor/mutators
// get the bonus
double Administrator::get_bonus( ) const
{
    return bonus;
}

// set_bonus() - set the bonus
void Administrator::set_bonus(double new_bonus)
{
    bonus = new_bonus;
}
//get the title
string Administrator::get_title( ) const
{
    return title;
}

// set_title() - set the title
void Administrator::set_title(string new_title)
{
    title = new_title;
}


// ToDo: implement virtual functions


// ToDo: implement virtual get_net_pay function
// Hint: compensation is salary + bonus
double Administrator::get_net_pay() const
{
        return get_salary()+bonus;
}

// ToDo: implement the print_check() function. Follow the model in SalariedEmployee
// Hint: Use the base class print_check()
void Administrator::print_check() const
{
	SalariedEmployee::print_check();
    cout << "Administrator Title: " << title << endl;
    cout<< "Bonus: "<<bonus<<"Pay :"<<get_salary()+bonus<<endl;
    cout << "_________________________________________________\n";
}

// ToDo: implement the promptInput() function. Follow the model in SalariedEmployee
// Hint: Use the base class promptInput()
istream & Administrator::promptInput(istream & in, ostream & out) 
{
	// ToDo: inplement the base class part, follow the model in SalariedEmployee
	SalariedEmployee::promptInput(in, out);

	// ToDo: read the bonus. Use ignorespace() to skip newline.
	out<< "Enter bonus and title :";
	in>> bonus;
	ignorespace(in);
	getline(in,title); //needed to get a string with spaces in between
	return in;
	// ToDo: read the rest of the line for the title


}

