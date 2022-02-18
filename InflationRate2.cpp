//This program calculates the inflation rate given two Consumer Price Index values and prints it to the monitor.

#include <iostream>
using namespace std;

/*
 * getInflationRate - calculates the inflation rate given the old and new consumer price index
 * @param old_cpi: is the consumer price index that it was a year ago
 * @param new_cpi: is the consumer price index that it is currently 
 * @returns the computed inflation rate or 0 if inputs are invalid.
 */
double getInflationRate(float old_cpi, float new_cpi);

int main()   //C++ programs start by executing the function main
{
   // TODO #1: declare two float variables for the old consumer price index (cpi) and the new cpi
	float old_cpi;
	float new_cpi;
	char input;
	float sum=0;
	float counter=0;
	float average;
   // TODO #2: Read in two float values for the cpi and store them in the variables
	do 
	{
	cout<<"Enter the old and new consumer price indices:";
	cin>>old_cpi;
	cin>>new_cpi;
   // TODO #3: call the function InflationRate with the two cpis
	getInflationRate(old_cpi,new_cpi);
   // TODO #4: print the results
	cout<<"Inflation rate is "<< getInflationRate(old_cpi,new_cpi);
	sum=sum+getInflationRate(old_cpi,new_cpi);
	if (getInflationRate(old_cpi,new_cpi) !=0)
	{
		counter++;
	}
	cout<<endl<<"Try again? (y or Y):";
	cin>>input;
	} while (input=='Y'||input=='y');
	average=sum/counter;
	cout<<"Average rate is "<<average;
   return 0;
}


// double getInflationRate(float old_cpi, float new_cpi)
// precondition:   both prices must be greater than 0.0
// postcondition:  the inflation rate is returned or 0 for invalid inputs
double getInflationRate(float old_cpi, float new_cpi)
{
   // TODO: Implement InflationRate to calculate the percentage increase or decrease
   // Use (new_cpi - old_cpi) / old_cpi * 100
   if ((old_cpi>0.0) && (new_cpi>0.0))
   {
	   double  inflationRate=(new_cpi - old_cpi) / old_cpi * 100;
		   return (inflationRate);
   }
   else
   { 
   
	   return (0);
   }
}
