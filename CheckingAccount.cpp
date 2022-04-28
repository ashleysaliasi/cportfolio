/*
ATM2000
Ashley Saliasi

*/
//Implementation of the class CheckingAccount.
#include <iostream>
#include <cmath>
#include "CheckingAccount.h"
#include "BankAccount.h"
using namespace std;

// To Do: include necessary header files



// To Do: Please write comments and code to implement CheckingAccount here

// constructor for checking account that includes a fee above zero
//Initializes the account balance to $dollars.cents and
//initializes the checking fee.
CheckingAccount::CheckingAccount(int dollars, int cents, double fee) : BankAccount(dollars, cents), checkFee(fee)
{
	if (fee < 0)
    	{
        	cout << "Illegal values for checking fee.\n";
        	exit(1); // throw exception;
    	}
}

// constructor for checking account with no cents
//Initializes the account balance to $dollars.00 and
//initializes the fee.
CheckingAccount::CheckingAccount(int dollars, double fee) : BankAccount(dollars), checkFee(fee)
{
    	if (fee < 0)
    	{
        	cout << "Illegal value for checking fee.\n";
        	exit(1);
    	}
}

//default constructor , blank intentionally
//Initializes the account balance to $0.00 and the check fee to 0.00.
CheckingAccount::CheckingAccount( ) : BankAccount(), checkFee(0.0)
{

}

//Precondition: If outs is a file output stream, then outs has already been
//connected to a file.
//Postcondition: balance and check fee have been written to the stream outs.
void CheckingAccount::output(ostream& outs) const
{
    	BankAccount::output(outs);
    	outs << "Check Fee: $" << getCheckFee() << endl;
}

//Precondition: If ins is a file input stream, then ins has already been
//connected to a file.
//Postcondition: balance and check fee have been read from the stream ins.
void CheckingAccount::input(istream& ins)
{
    	BankAccount::input(ins);
    	ins >> checkFee;
}

//accessor for check fee
double CheckingAccount::getCheckFee() const
{
	return checkFee;
}

// Precondition: dollars and cents must be greater or equal to 0.
// Dollars and cents be less than or equal to balance.
// Postcondition: increase the balance by the dollars and cents
// plus the fee. 
// uses bank account to withdraw and then remove fee from balance
void CheckingAccount:: check(int dollars, int cents)
{
	BankAccount::withdraw(dollars,cents);
	set_balance(get_balance()-checkFee);
}

