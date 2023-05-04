/*
Pattern Printing
    Input   :   Rows = 4, Column = 4;

    Output  :   *   #   *   #
                *   #   *   #
                *   #   *   #
                *   #   *   #
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:

        int iRow;
        int iCol;

        Pattern(int A, int B)
        {
            iRow = A;
            iCol = B;
        }

        void Display()
        {
            int i = 0, j = 0;

            if(iRow < 0)
            {
                iRow = -iRow;
            }

            if(iCol < 0)
            {
                iCol = -iCol;
            }

            for(i = 1; i <= iRow; i++)      
            {
                for(j = 1; j <= iCol; j++)
                {
                    if((j % 2) != 0)
                    {
                        cout<<"*\t";
                    }
                    else
                    {
                        cout<<"#\t";
                    }
                }
                cout<<"\n";
            }
        }
          
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Entre Number of Rows :"<<"\n";
    cin>>iValue1;

    cout<<"Entre Number of Column :"<<"\n";
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1,iValue2);

    pobj->Display();

    delete pobj;

    return 0;
}