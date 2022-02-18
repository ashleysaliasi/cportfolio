#include <iostream>
#include <string>
using namespace std;
int main ()//main function
{
        char destination; //declaration of variables 
        double ticketPrice;
        int flightTime;
        bool isWeekEnd;
        bool isDayFlight;
        char weekEndOrWeekDayLetter;
        int numTickets;
        double totalCost;
        double userPayment;
        double change;

        cout<< "Welcome to Fordham Airlines!\n";
        cout<<"What is your destination? ([C]hicago, [M]iami, [P]ortland)";
        cin>> destination;
        cout<< " What time will you travel? (Enter time between 0-2359)";
        cin>> flightTime;
        cout<< " What type of day are you traveling? (week[E]nd or week[D]ay)";
        cin>> weekEndOrWeekDayLetter; // bool of time and day
                if (500<=flightTime && flightTime<=1900)

                        isDayFlight=true;
                else
                        isDayFlight=false;

                if (weekEndOrWeekDayLetter=='E')


                        isWeekEnd=true;
                else
                        isWeekEnd=false;
// costs of each ticket
        if (destination=='C' && isDayFlight && isWeekEnd)
        {
                ticketPrice=90;
        }
        else if (destination=='C'&& isDayFlight && (!isWeekEnd))
        {
                ticketPrice=75;
        }
        else if (destination=='C' && (!isDayFlight) && (!isWeekEnd))
        {
                ticketPrice=50;
        }
        else if (destination=='C' && (!isDayFlight) && isWeekEnd)
        {
                ticketPrice=60;
        }
        else if (destination=='M' && isDayFlight && isWeekEnd)
        {
                ticketPrice=180;
        }
        else if (destination=='M' && isDayFlight && (!isWeekEnd))
        {
                ticketPrice= 150;
        }
        else if (destination=='M' && (!isDayFlight) && (!isWeekEnd))
        {
               ticketPrice=120;
        }
        else if (destination=='P' && isDayFlight && isWeekEnd)
        {
                ticketPrice= 360;
        }
        else if (destination=='P' && isDayFlight && (!isWeekEnd))
        {
                ticketPrice=300;
        }
        else if (destination=='P' && (!isDayFlight) && (!isWeekEnd))
        {
                ticketPrice=200;
        }
        else if (destination=='P' && (!isDayFlight) && isWeekEnd)
        {
                ticketPrice=240;
        }
cout.setf(ios::fixed);
cout.setf(ios::showpoint); // show decimals
                                // even if not needed
cout.precision(2);  // 2 values to the right of the decimal
        cout<< " Each ticket will cost: $"<< ticketPrice<< endl;
        cout<< "How many tickets do you want? ";
        cin>> numTickets;
        totalCost=numTickets*ticketPrice;
        cout<< "You owe: $" << totalCost<< endl; // cost of tickets
        cout<< "Amount paid? ";
        cin>> userPayment;
        
        if (userPayment<totalCost) // wrong amount entered 
        {
                cout<<"That is too little! No tickets ordered.";
        } 
        else
        {
                change=userPayment-totalCost;
                cout<<"You will get in change : $"<< change<< endl; // change
                cout<<" Your tickets have been ordered!";
        }

        return 0;
}


