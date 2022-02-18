#include <iostream>
#include <string>
using namespace std;
// prototypes
void Get2Ints(int& a, int& b);
void Print2Ints (int a, int b);
void swap (int& val1, int& val2);
int swapAndMult (int& x, int& y, int mult);
// functions
void Get2Ints(int& a, int& b)//input function
{
        cin>>a>>b;
}

void swap (int& val1, int& val2)//swap function
{
        int temp;
        temp=val1;
        val1=val2;
        val2=temp;
}
void Print2Ints (int a, int b)//print function
{
        cout<<a<<" "<<b<<endl;
}

int swapAndMult (int& x, int& y, int mult)//swap and multiply
{
        swap(x,y);
        x*=mult;
        y*=mult;
        return (x,y);
}
int main ()
{
        int a;
        int b;
        int mult;
        cout<<"Input two numbers: ";
        Get2Ints( a, b);
        Print2Ints ( a, b);
        swap (a,b);
        cout<<"After swap: "<<endl;
        Print2Ints ( a, b);
        cout<<"Enter the multiplier: ";
        cin>> mult;
        cout<< mult<<endl;
        swapAndMult (a,b, mult);
        cout<< "After swap and mult: "<<endl;
        Print2Ints ( a, b);
        return 0;
}

