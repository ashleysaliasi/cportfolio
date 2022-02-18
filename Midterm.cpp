#include <iostream>
#include <string>
using namespace std;
int main ()//main function
{
        int initialNum;
        char operation;
        int operationNum;
        int varNum;


        cout<< "Simple calculator"<<endl;
        cout<< "Give a first number: ";
        cin>> initialNum;
        
        do { //loop begins for the calculator
                cout<< "Choose an operation: ";
                cin>> operation;

                if (operation=='+') //if statement for addition
                {
                        cout<<"Choose a number to add: ";
                        cin>> operationNum;
                        varNum=initialNum+operationNum;
                        cout<<initialNum<<operation<<operationNum<<"="<<varNum<<endl;
                }
                else if (operation=='x')//if statement for multiplying
                {
                        cout<<"Choose a number to multiply: ";
                        cin>> operationNum;
                        initialNum=varNum*operationNum;
                        cout<<varNum<<operation<<operationNum<<"="<<initialNum<<endl;
                        varNum=initialNum;
                }

        } while (!(operation=='q')); //conditions so it doesn't run when q is entered

        if (operation=='q') //if statement for quit
        {
                cout<<"Finished!"<<endl;
        }

        return 0;

}