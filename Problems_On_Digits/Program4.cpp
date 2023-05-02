// Accept number from user and count frequency of 4 in it

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int flag;
        int iCount;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            flag = false;
            iCount = 0;
        }

        int CountFour()
        {
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if(iDigit == 4)
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

    iRet = dobj.CountFour();

    cout<<"Frequency of 4 in digit "<<iValue<<" is :"<<iRet;

    return 0;
}
