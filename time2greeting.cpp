
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string time2greeting (int time)
{
         if (time>2400 || time<0|| time%100>59)
        {
                return ("That is an illegal time");
        }
        else if (time>= 400&&time<1200)
        {
                return("Good Morning");
        }
        else if (time>=1200 && time<1700)
        {
                return ("Good Afternoon");
        }
        else if (time>=1500 && time<2300)
        {
                return ("Good Evening");
        }
        else if (time>=2300 || time<400)
        {
                return ("What are you doing up");
        }

        return ("");
}

int main ()
{
        int time;
        string name;
        cout<<"What is your name?";
        cin>>name;
        cout<< " What time is it? (0-2400)";
        cin>>time;
        cout<< time2greeting(time)<<", "<<name<<endl;
        return 0;
}


