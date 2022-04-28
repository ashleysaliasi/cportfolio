/*
Rational 
Ashley Saliasi
03/28/2022
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class rational
{
public:
	/* TODO: default constructor set the rational number to 0, (i.e., numerator is 0, denominator is 1) */

	rational ();

	/* TODO: define input to set the invoking object's value from user input */
	void input();

	/* TODO: define output to display invoking object's value in the standard output, in the form of numerator/denominator */
	void output() const;

	/* TODO: declare the accessor to return the invoking object's numerator */
	int getNumerator();
	
	/* TODO: declare the accessor to return the invoking object's denominator */
	int getDenominator();

	/* TODO: declare Add to set the invoking object to be the sum of op1 and op2, use const & parameters */

	void add (const rational& op1,const rational& op2);

	/* TODO: declare Subtract to set the invoking object to the difference of op1 and op2, use const & parameters */

	void subtract (const rational& op1, const rational& op2);

	/* TODO: declare Multiply to set the invoking object to the product of op1 and op2, use const & parameters */

	void multiply (const rational& op1, const rational& op2);

	/* TODO: declare Divide to set the invoking object to the Quotient of op1 and op2, use const & parameters */

	void divide (const rational& op1, const rational& op2);

private:
	/* TODO: declare data members for rational object */
	
	int numerator;
	int denominator;

};


int main()
{
	char oper;
	// TODO: declare rational objects for result and operand.
	
	rational result, op2;
	
	cout << "Enter op1 (in the format of p/q): ";
	// TODO: Use your input function to read the first operand into result.
	
	result.input();
	
	//Test rational class member function 
	do {
		cout << "\nEnter operator [+, -, /, *, =, c(lear), a(ccessors), q(uit)]: ";
		// TODO: Read the operator into oper
		
		cin>>oper;

		// TODO: Change the pseodocode below to test oper for binary operators
		if (oper=='+'||oper=='-'||oper=='*'||oper=='/') {
			cout << "\nEnter op2 (in the format of p/q): ";
			// TODO: Use your input function to read the operand into operand
			
			op2.input();
		}

		// ToDo: Implement a switch or multiway if statement with one case for each option above where
		// '+','*','/','-' inputs a rational op1 and calculates result.oper(result,op1)
		// '=' outputs the current result,
		// 'c' to clear current result, use input function to read first operand into result,
		// 'a' to test accessors, 'q' to quit.
		switch (oper)
		{
			case '+':
				result.add(result, op2);
				break;
			case '-':
				result.subtract(result,op2);
				break;
			case '*':
				result.multiply(result,op2);
				break;
			case '/':
				result.divide(result,op2);
				break;
			case '=':
				cout<<"result = ";
				result.output();
				break;
			case 'c':
				cout<<"Enter op1 (in the format of p/q): ";
				result.input();
				break;
			case 'a':
				cout<<"\nresult's numerator is: "<< result.getNumerator()<<endl;
				cout<<"\nresult's denominator is: "<< result.getDenominator()<<endl;
				break;
		}
	} while (oper != 'q');
	return 0;
}


// TODO: Definitions of all member functions declared above

//input member function that repeats if invalid input is entered
void rational:: input()
{
	char input;
	do {
		cin>>numerator>>input>>denominator;
	} while (input!='/'|| denominator==0);
}

// output member functuons that prints the rational number 
void rational:: output() const
{
	cout<<numerator<<"/"<<denominator;
}

// member fuction to return numerator
int rational:: getNumerator()
{
	return numerator;
}

// member function to return denominator
int rational:: getDenominator()
{
	return denominator;
}

// member funtion to add rational numbers
void rational:: add(const rational& op1,const rational& op2)
{
	this-> numerator=op1.numerator *op2.denominator + op2.numerator*op1.denominator;
	this-> denominator= op1.denominator*op2.denominator;
}

//member function to subtract rational numbers 
void rational:: subtract(const rational& op1,const rational& op2)
{
        this-> numerator=op1.numerator *op2.denominator-op2.numerator*op1.denominator;
        this-> denominator= op1.denominator*op2.denominator;
}

//memeber function to multiply rational numbers
void rational:: multiply(const rational& op1,const rational& op2)
{
        this-> numerator=op1.numerator * op2.numerator;
        this-> denominator= op1.denominator*op2.denominator;
}

//member function to divide rational numbers
void rational:: divide (const rational& op1,const rational& op2)
{
        this-> numerator=op1.numerator *op2.denominator;
        this-> denominator= op1.denominator*op2.numerator;
}

// TODO: Default constructor sets numerator to 0 and denominator to 1

rational::rational ()
{
	numerator=0;
	denominator=1;
}
