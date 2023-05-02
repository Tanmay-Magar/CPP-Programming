// Accept number from user and count frequency of such a digit which are less than 6

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int iCount;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            iCount = 0;
        }

        int BelowSix()
        {
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if(iDigit < 6)
                {
                    iCount++;
                }

                Temp = Temp / 10;
            }
            return iCount;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.BelowSix();

    cout<<"Digits less than six in "<<iValue<<" is :"<<iRet;

    return 0;
}
