/*
// Pattern Printing
//input     4
//output    1   *   2   *   3   *   4   *
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:

        int iNo;

        Pattern(int A)
        {
            iNo = A;
        }

        void Display()
        {
            int i = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(i = 1; i <= iNo; i++)
            {
                cout<<i<<"\t*\t";
            }
            cout<<"\n";
        }
          
};

int main()
{
    int iValue = 0;

    cout<<"Entre number : \n";
    cin>>iValue;

    Pattern *pobj = new Pattern(iValue);

    pobj->Display();

    delete pobj;

    return 0;
}