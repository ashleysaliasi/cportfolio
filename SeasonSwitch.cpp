#include <iostream>
#include <string>
using namespace std;
int main ()// start main function
{
        int monthNum;
        cout<< "Enter a month number: ";//varible declared
        cin>> monthNum;
        switch (monthNum)
                {

                case 12:
                case 1:
                case 2: //winter months
                cout<<"It is Winter";
                break;

                case 3:
                case 4:
                case 5: //spring months
                cout<<"It is Spring";
                break;

                case 6:
                case 7:
                case 8://summer months
                cout<<"It is Summer";
                break;

                case 9:
                case 10:
                case 11: //winter months
                cout<<"It is Fall";
                break;

                default: //invalid input
                cout<<"Invalid month. Enter number 1-12";
                break;
                }
        return 0;//end function
}


