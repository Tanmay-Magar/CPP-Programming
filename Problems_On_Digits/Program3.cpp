// Accept number from user and count frequency of 2 in it

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

        int CountTwo()
        {
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if(iDigit == 2)
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

    iRet = dobj.CountTwo();

    cout<<"Frequency of 2 in digit "<<iValue<<" is :"<<iRet;

    return 0;
}
