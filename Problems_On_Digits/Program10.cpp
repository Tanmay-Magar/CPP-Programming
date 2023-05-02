// Accept N number from user and return difference between summation of even digits and summation of odd digits

#include<iostream>
using namespace std;

class Digit
{
    public :

        int iDigit;
        int Temp;
        int SumEven;
        int SumOdd;

        Digit(int iNo)
        {
            iDigit = 0;
            Temp = iNo;
            SumEven = 0;
            SumOdd = 0;
        }

        int CountDiff()
        {
            if(Temp < 0)
            {
                Temp = -Temp;
            }
            
            while(Temp != 0)
            {
                iDigit = Temp % 10;

                if((iDigit % 2) == 0)
                {
                    SumEven = SumEven + iDigit;
                }
                else
                {
                    SumOdd = SumOdd + iDigit;
                }

                Temp = Temp / 10;
            }

            return(SumEven - SumOdd);
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Entre number :\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CountDiff();

    cout<<"Difference between summation of even and odd digits is : "<<iRet;

    return 0;
}
