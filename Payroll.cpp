// SAVE THIS FILE AS Payroll.cpp
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// TODO: Add function prototypes for all the declared functions
double getHighestPay (double payArray[], int maxSize);
double getLowestPay  (double payArray[], int maxSize);
int getEmployeeNames (string nameArray[],int maxSize);
void getHourlyPay (string nameArray[],double hourlyPayArray[],int numNames);
// TODO: Declare two functions to compute the highestPay and lowestPay
//       HINT: Each should return the index of the correct value in the grossPay array.
double getHighestPay (double payArray[], int maxSize)
{
        int max;
        double payNum;
        for (int i=0;i<maxSize;i++)
        {

                if (i==0)
                {
                         max=payArray[i];
                         payNum=i++;
                }
                if (payArray[i]>max)
                {
                        max=payArray[i];
                        payNum=i++;
                }
        }
        return (payNum);
}
double getLowestPay  (double payArray[], int maxSize)
{
        int min;
        double payNum;
        for (int i=0;i<maxSize;i++)
        {
                if (i==0)
                {
                         min=payArray[i];
                         payNum=i++;
                }
                if (payArray[i]<min)
                {
                        min=payArray[i];
                        payNum=i++;
                }
        }
        return (payNum);
}


/* TODO: Create a function called
getEmployeeNames
        Arguments :
                Name array(first and last name)
                Maximum size
                Return the number of names filled.
*/

int getEmployeeNames (string nameArray[],int maxSize)
{
        int numNames=0;
        do
        {
                cout<<"Enter an employee name: ";
                getline(cin,nameArray[numNames]);
                numNames++;
        } while ((numNames<maxSize)&& (nameArray[numNames - 1]!="quit"));
        return(numNames-1);
}

/* TODO: Create a function called
getHourlyPay
        Arguments :
                NameArray(filled in Step 1)
                HourlyPayArray(starts empty)
                NumberOfNamesFilled(from Step1)
*/
void getHourlyPay (string nameArray[],double hourlyPayArray[],int numNames)
{
        for (int i=0;i<numNames;i++)
        {
                cout<<"Enter "<<nameArray[i]<<"'s hourly pay rate: ";
                cin>>hourlyPayArray[i];

        }
}




int main()

{
	cout.setf(ios::fixed);
        cout.setf(ios::showpoint); // show decimals even if not needed
        cout.precision(2);  // show 2 digits to right of decimal
        // TODO: Declare an array of strings for the employeeNames able to hold a maximum of SIZE employees

        // TODO: Declare arrays of double hourlyPay and grossPay, each able to hold a maximum of SIZE employees

        // TODO: Declare a 2-D array of doubles for the hours. It should hold a maximum of SIZE employees, each having 7 days.

    // TODO: Read in the employee names and return the numberOfEmployees.

        // TODO: Call your function to read in the hourly pay for each of the employees.

    // TODO: Read in the daily hours for each employee. There will be 7 entries per week.

    // NOTE: This prints the headers with a set width for each field.  Follow this format for the entries
    //cout << setw(20) << "Employee Name" << setw(12) << " Hours" << setw(10) << "Gross Pay" << endl; // TODO: For each employee, print: name, total hours and gross pay

        // TODO: Call the function that finds the highest gross pay and print the corresponding employee name and gross pay.
        //       HINT: consider finding the Index of the value rather than returning the actual highest gross pay.

        // TODO: Call the function to find the lowest gross pay and print the corresponding employee name and gross pay.
        const int SIZE=50;
        const int DAYS=7;
        string employeeNames[SIZE];
        double hourlyPay[SIZE];
        double grossPay[SIZE];
        double hours[SIZE][DAYS];
        double totalHours[SIZE];
        int index=getEmployeeNames(employeeNames,SIZE); //index for num of employees filled in array
        getHourlyPay(employeeNames, hourlyPay,index);
        for (int employeeNum=0;employeeNum<index;employeeNum++) // nested for loop to get hours for each employee
        {
                cout<<"Enter "<<employeeNames[employeeNum]<<"'s hours for 7 days (0 if day off): ";
                for (int numDay=0; numDay<DAYS;numDay++)
                {
                        cin >> hours[employeeNum][numDay];
                }

        }
        for (int employeeNum=0;employeeNum<index;employeeNum++) //total hours and gross pay nested for loop
        {
                for (int numDay=0; numDay<DAYS; numDay++)
                {
                         totalHours[employeeNum] += hours[employeeNum][numDay];

                }
                
                grossPay[employeeNum]=(totalHours[employeeNum]*hourlyPay[employeeNum]);
        }
        cout << setw(20) << "Employee Name" << setw(12) << " Total Hours Gross Pay" << endl; //heading
        for (int i=0;i<index;i++)
        {

                cout << setw(20) <<employeeNames[i] << setw(12)<<totalHours[i] << setw(10)<<grossPay[i] << endl;
        }
        int highestPayIndex= getHighestPay(grossPay,index);
        int lowestPayIndex= getLowestPay(grossPay,index);
        cout<<"Highest Pay: $"<<grossPay[highestPayIndex]<<" "<<employeeNames[highestPayIndex]<<endl;
        cout<<"Lowest Pay: $"<<grossPay[lowestPayIndex]<<" "<<employeeNames[lowestPayIndex]<<endl;

    return 0;
}