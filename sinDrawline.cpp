#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//2 required functions, degrees to radians and drawline
        const double PI= 3.14159265358979323846;

        double Degree2Radians (double degree)// degrees to radians
        {
                double radians;
                double finalNum;

                radians= ((degree*PI)/180);
                finalNum= sin(radians);
                return (finalNum);

        }

        void  drawLine (char dash, int numRepetitions)//draw line function
        {
                for (int i=0; i<numRepetitions;i++)
                {
                        cout<<dash;
                }
                cout<<endl;
        }

int main()//main function
{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint); // show decimals even if not needed
        cout.precision(5);  // show 5 digits to right of decimal


        {
        for (int i=0;i<=720; i+=10)
        {

                cout<<" sin("<<i<<")="<<Degree2Radians(i)<<endl;
                if (i%90==0)
                {
                        drawLine ('-',30);
                }
        }
        }
        return 0;
}
