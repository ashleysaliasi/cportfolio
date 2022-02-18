#include <iostream>
#include <iomanip>
using namespace std;
int main ()//main function
{
        const int ROWLENGTH=12;//row length
        const int COLLENGTH=10;//column length
        int tableArray[ROWLENGTH][COLLENGTH];//mult table array
                for (int rowIndex=0;rowIndex<ROWLENGTH;rowIndex++)//for loop for row
                {
                        for(int colIndex=0;colIndex<COLLENGTH;colIndex++)// for loop for column
                        {
                                int colVal=colIndex+1;
                                int rowVal=rowIndex+1;
                                tableArray[rowIndex][colIndex]=colVal*rowVal;
                                cout<<setw(6)<<tableArray[rowIndex][colIndex];// sets width between each number 
                        }
                        cout<<endl;
                }

return 0;
}