// Accept N number from user and return return the multiplication of all digits

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int iMult;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            iMult = 1;
        }

        int CountRange()
        {
            if(Temp < 0)
            {
                Temp = -Temp;
            }
            
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                iMult = iMult * iDigit;

                Temp = Temp / 10;
            }

            return iMult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CountRange();

    cout<<"Multiplication of digits in number "<<iValue<<" are :"<<iRet;

    return 0;
}
