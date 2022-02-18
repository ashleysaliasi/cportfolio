
#include <iostream>
using namespace std;

/*
 * getInflationRate - calculates the inflation rate given the old and new consumer price index
 * @param old_cpi: is the consumer price index that it was a year ago
 * @param new_cpi: is the consumer price index that it is currently 
 * @returns the computed inflation rate or 0 if inputs are invalid.
 */

double getInflationRate(float old_cpi, float new_cpi);
void getCPIValues (float &cpi1,float &cpi2);
void swap_values (double *value1, double  *value2);
void sort_Array (double array[],int size);
double findMedianRate (double array[], int numRates);

int main()   //C++ programs start by executing the function main
{
   // TODO #1: declare variables
	float old_cpi;
	float new_cpi;
	char input;
	float sum=0;
	float counter=0;
	float average;
	const int MAX_RATES=20;
	int index=0;
	double ratesArray[MAX_RATES];
   // TODO #2: Read in two float values for the cpi and store them in the variables
	do 
	{
	getCPIValues (old_cpi,new_cpi);
   // TODO #3: call the function InflationRate with the two cpis
	getInflationRate(old_cpi,new_cpi);
   // TODO #4: print the results
	cout<<"Inflation rate is "<< getInflationRate(old_cpi,new_cpi);
	if (index<MAX_RATES)
	{
		ratesArray[index]=getInflationRate(old_cpi,new_cpi);
		index++;
	}
	sum=sum+getInflationRate(old_cpi,new_cpi);
	if (getInflationRate(old_cpi,new_cpi) !=0)
	{
	counter++;
	}
	cout<<endl<<"Try again? (y or Y):";
	cin>>input;
	} while (input=='Y'||input=='y');
	average=sum/counter;
	cout<<"Average rate is "<<average<<endl;
	cout<< "Median rate is "<< findMedianRate (ratesArray,index)<<endl;

   return 0;
}
// valid cpi values function

void getCPIValues (float &cpi1,float &cpi2)
{
	do
	{
	cout<<"Enter the old and new consumer price indices:";
        	cin>>cpi1;
        	cin>>cpi2;
		if ((cpi1<=0)||(cpi2<=0))
		{
			cout<<" Error: CPI values must be greater than 0"<<endl;
		}
	} while ((cpi1<=0)||(cpi2<=0));
}
// functions to sort array

void swap_values (double *value1, double *value2)
{
	double temp= *value1;
	*value1=*value2;
	*value2=temp;
}

void sort_Array (double array[],int size)
{
	for (int i=0;i<size-1;i++)
	{
		for (int j=0;j<size-i-1;j++)
		{
			if (array[j]>array[j+1])
			{ 
				swap_values(&array[j],&array[j+1]);
			}
		}
	}
}
// function for median rate

double findMedianRate (double array[], int numRates)
{
	sort_Array(array,numRates);
	if (numRates%2!=0)
	{
		return (array[numRates/2]);
	}
	else 
	{
		return (((array[(numRates-1)/2])+(array[numRates/2]))/2.0);
	}
}

// double getInflationRate(float old_cpi, float new_cpi)
// precondition:   both prices must be greater than 0.0
// postcondition:  the inflation rate is returned or 0 for invalid input

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
