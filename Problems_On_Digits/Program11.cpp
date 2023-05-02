// Accept N number from user and check if number is armstrong or not

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int iSum;
        int iOrg;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            iOrg = iNo;
            iSum = 0;
        }

        int ChkArmStr()
        {
            if(Temp < 0)
            {
                Temp = -Temp;
            }

            while(Temp != 0)
            {
                iDigit = Temp % 10;

                iSum = iSum + (iDigit * iDigit * iDigit);

                Temp = Temp / 10;
            }

            if(iSum == iOrg)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
};

int main()
{
    int iValue = 0;
    bool bRet = 0;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    bRet = dobj.ChkArmStr();

    if(bRet == true)
    {
        cout<<iValue<<" is armstrong number."<<"\n";
    }
    else
    {
        cout<<iValue<<" is not an armstrong number."<<"\n";
    }

    return 0;
}
