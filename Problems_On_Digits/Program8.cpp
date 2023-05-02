// Accept N number from user and return the count of odd digits between 3 and 7 

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

        int CountRange()
        {
            if(Temp < 0)
            {
                Temp = -Temp;
            }
            
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if(iDigit >= 3 && iDigit <= 7)
                {
                    if((iDigit % 2) != 0)
                    {
                        iCount++;   
                    }
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

    iRet = dobj.CountRange();

    cout<<"Total digits in range of 3 to 7 in "<<iValue<<" are :"<<iRet;

    return 0;
}
