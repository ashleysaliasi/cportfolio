#include <iostream>
#include <string>
using namespace std;
int main ()// start main function
{
        int monthNum;
        cout<< "Enter a month number: ";//variable declared
        cin>> monthNum;
        if ((monthNum==2)||(monthNum==12)||(monthNum==1))//winter months
                cout<<"It is Winter";
        if ((monthNum==4)||(monthNum==5)||(monthNum==3))//spring months
                cout<<"It is Spring";
        if ((monthNum==6)||(monthNum==8)||(monthNum==7))//summer months
                cout<<"It is Summer";
        if ((monthNum==9)||(monthNum==11)||(monthNum==10))//winter months
                cout<<"It is Fall";
        if ((monthNum<=0)||(monthNum>12))//invalid input
                cout<<"Invalid month. Enter number 1-12";
        return 0;//end function
}

