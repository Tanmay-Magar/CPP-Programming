// Accept number from user and check whether it contains zero in it

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int flag;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            flag = false;
        }

        bool CheckZero()
        {
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if(iDigit == 0)
                {
                    flag = true;
                    break;
                }

                Temp = Temp / 10;
            }
            return flag;
        }

};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    bRet = dobj.CheckZero();

    if(bRet == true)
    {
        cout<<iValue<<" contains zero in it.\n";
    }
    else
    {
        cout<<iValue<<" does not contains zero in it.\n";
    }

    return 0;
}
