#include <iostream>
#include <string>
using namespace std;
int main()// start main function
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);// for decimal precison
        string name;// declare variables
        int numDonuts;
        int numBagels;
        int numCoffees;
        double  totalAmount;
        cout<<"Welcome to our Coffeeshop!"<<endl;	
	cout<< "What is your first name?";
        cin >> name;
        cout <<"Welcome "<< name<<endl;
	cout<< "How many coffees?";
        cin >> numCoffees;
        cout <<"How many bagels?";
        cin >> numBagels;
        cout <<"How many donuts?";
        cin >> numDonuts;
        totalAmount = ((numCoffees * 2.5) + (numBagels * 1.75) + (numDonuts * 1)) * 1.085;// tax equation
        cout <<"Your total is: $"<< totalAmount<< endl;
	cout <<"How much will you pay?";
	double paidAmount;
	cin >> paidAmount;	
	cout<< "Receipt for Customer: " <<name<< endl;
        cout<< "Coffees: "<< numCoffees<< endl;
	cout<< "Bagels: "<< numBagels<< endl;
	cout<< "Donuts: "<< numDonuts<< endl;
	cout<< "Total is: $" << totalAmount<< endl;
	double changeAmount;
	changeAmount=paidAmount-totalAmount;// change equation
	cout<< "Your change is: $"<< changeAmount<< endl;
	return 0;
}
