// Accept number from user and display its digits in reverse

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
        }

        void DigitReverse()
        {
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                cout<<iDigit<<"\t";
                
                Temp = Temp / 10;
            }

        }
};

int main()
{
    int iValue = 0;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    dobj.DigitReverse();

    return 0;
}
