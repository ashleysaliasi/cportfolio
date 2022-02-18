#include <iostream>
#include <string>
using namespace std;
int main ()//main function
{
        int distanceRemaining=0;
        int distance=14;
        int turn=4;
        int bus=2;
        int subway=5;
        int jetpack=10;
        int travelMode;
        cout<<"You are 14 mile(s) from campus!\n"; 
        do {
                cout<< "How do you wish to travel? (1 bus, 2 subway, 3 jetpack)";
                cin>>travelMode;
                turn--;
                if (travelMode==1) // bus option
                {
                        distance= distance-bus;
                        if (distance>=0)
                        {

                        cout<<" You are " << distance<<" mile(s) from campus!\n";
                        }
                }
                else if (travelMode==2)// subway option
                {
                        distance=distance-subway;
                        if (distance>=0)
                        {

                        cout<<" You are " << distance<<" mile(s) from campus!\n";
                        }
                }
                else if (travelMode==3)// jetpack option
                {
                        distance=distance-jetpack;
                        if (distance>=0)
                        {

                        cout<<" You are " << distance<<" mile(s) from campus!\n";
                        }
                }
                else if (travelMode > 3)// illegal entry check
                {
                        cout<< " Invalid choice, try again!\n";
                        turn++;
                }
                if (distance==distanceRemaining)// end of game
                {
                cout<<" You have won!\n" << endl;
                return 0;
                }
        

                
        } while( (turn>0) && (distance>=0));// conditions for do while
        if (distance<0)// overshot target game end
        {
                cout<< " You have over-shot your target!\n"<<"You lose!\n";
        }
        else// target not reached game end
        {
                cout<< "You haven't reached your target!\n"<<"You lose!\n";
        }

        return 0;
}