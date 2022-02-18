#include <iostream>
#include <string>
using namespace std;
//function prototype
void printNumArray (int numArray[], int size);
// function to print the number array
void printNumArray (int numArray[], int size)
{
        for (int n=0;n<size;n++)
        {
        cout<<numArray[n]<<" ";
        }
}
// main function
int main ()
{
        int numArray[20];
        int counter=0;    //counter for the number of 5s in the array 
        for (int i=0;i<20;i++) // for loop to read in the array
        {
                cout<<"Enter a number:";
                cin>>numArray[i];
               
                if ((numArray[i]<=numArray[i-1])&&(numArray[i]!=(-1))) //conditions to check if number is smaller than the previous
                {
                        cout<<"Too small!"<<endl;
                        i--;
                }
		else if (numArray[i]==5) //conditions to increase counter for num 5
                {
                        counter++;
                }
                else if (numArray[i]>70) //conditions to check if num is greater than 70 and change to zero if conditions are met
                {
                        numArray[i]=0;
                }
                else if ((numArray[i]%5==0)&&(numArray[i]<=70)) // conditions to check for multiple of 5 and increase counter
                {
                        numArray[i]=5;
                        counter++;
                }
                else if (numArray[i]==(-1)) // condtions to end loop
                {
                        i--;
                        break;
                }
                cout<<"Current numbers: ";
                printNumArray(numArray,(i+1)); // call function to print array
                cout<<endl;
        }
        cout<<"Number of 5s = "<<counter;
        cout<<endl;
        cout<<"All done!";
        return 0;
}
