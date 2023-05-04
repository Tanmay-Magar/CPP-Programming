/*
Pattern Printing
    Input   :   Rows = 4, Column = 4;

    Output  :   
    #   1   1   1
    2   #   2   2
    3   3   #   3
    4   4   4   #
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

            if(iRow != iCol)
            {
                cout<<"Row number and column numbers are different"<<"\n";
                return;
            }

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"#\t";
                    }
                    else
                    {
                        cout<<i<<"\t";
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