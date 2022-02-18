

#include <iostream>
using namespace std;
// prototypes
int readArray(int myArray[], int maxSize);
void printArray(int myArray[], int maxSize);
int findMin (int myArray[],int maxSize);
int findMax (int myArray[],int maxSize);
int sum (int myArray[], int maxSize);
float average (int myArray[], int  maxSize);
bool findInArray (int myArray[],int maxSize, int userNum);
int findNumTimesInArray (int myArray[], int maxSize, int userNum);
// functions
int readArray(int myArray[], int maxSize)
{
        int i=0;
       int value;
do{
               cin>>value;
               myArray[i]=value;
               i++;
        }while ((value>=0)&&(i<maxSize));
        return (i-1);

} //function to enter in array numbers and check if array ends when negative is entered
void printArray(int myArray[], int maxSize)

{
        for (int i=0;i<maxSize;i++){
        cout<<myArray[i]<<" ";
        }
}// prints the array without negative 
int findMin (int myArray[],int maxSize)
{
        int i=0;
        int minValue=myArray[i];
        i += 1;
        while(i<maxSize)
        {
                if (myArray[i]<minValue)
                        minValue=myArray[i];
                i++;
        }
        return (minValue);
}// find the minimum value in the array
int findMax (int myArray[],int maxSize)
{
        int i=0;
        int maxValue=myArray[i];
        i++;
        while(i<maxSize)
        {
                if (myArray[i]>maxValue)
                        maxValue=myArray[i];
                i++;
        }
        return (maxValue);
}// finds the max value in the array
int sum (int myArray[], int maxSize)
{
        int myArraySum=0;
        for (int i=0;i<maxSize;i++)
        {
                 myArraySum=myArray[i]+myArraySum;
        }
        return myArraySum;
}//calculates the sum
float average (int myArray[], int maxSize)
{
        float myArrayAverage=0;
        float myArraySum=0;
        float counter=0;
        for (int i=0;i<maxSize;i++)
        {
                 myArraySum=myArray[i]+myArraySum;
                 counter++;
        }
        myArrayAverage=myArraySum/counter;
        return (myArrayAverage);
}// calculates the average as a float
bool findInArray (int myArray[],int maxSize, int userNum)
{
        for (int i=0;i<maxSize;i++)
        {
                if (myArray[i]==userNum)
                {
                        return(true);
                }

                else{
                        return(false);
                }
        }
}// find a specific value in the array
int findNumTimesInArray (int myArray[],int maxSize, int userNum)
{

        int counter=0;
        for (int i=0;i<maxSize;i++)
        {
                if (myArray[i]==userNum)
                {
                        counter++;
                }
        }
        return (counter);
}// find the frequency of a specific number in the array

int main () {
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);// for decimal precison       
        cout<<"Please enter up to 50 non-negative whole numbers separated by space."<<endl<<"Mark the end of the input list with a negative number: "<<endl;
        int userNum;
        int myArray[50];
        int sizeOfArray=readArray(myArray,50);
        printArray(myArray,sizeOfArray);
	cout<<endl;
        cout<<"The minimum value in the array is "<<findMin(myArray,sizeOfArray)<<endl;
        cout<<"The maximum value in the array is "<<findMax(myArray,sizeOfArray)<<endl;
        cout<<"The sum of all the elements in the array is "<<sum(myArray,sizeOfArray)<<endl;
 	cout<<"The average of all the elements in the array is "<<average(myArray,sizeOfArray)<<endl;
        cout<<"Please enter the value you want to search in the array: ";
        cin>>userNum;
        if ((findInArray(myArray,sizeOfArray,userNum))==true)
        {
                cout<<"Find your target "<<userNum<<endl;
        }
        else {
                cout<< "Could not find "<<userNum<<endl;
        }
        cout<<"Please enter the value you want to know the frequency of: ";
        cin>>userNum;
        cout<<"The number "<<userNum<< " has occurred "<<findNumTimesInArray(myArray,sizeOfArray,userNum)<<" time(s) in the array"<<endl;

}

