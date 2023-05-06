// Accept 1 number from user and check number is armstrong or not 

#include<iostream>
using namespace std;

class Digits
{
    private:
        int CountDigits(int iNo)
        {
            int iCnt = 0;

            while(iNo != 0)
            {
                iCnt++;

                iNo = iNo / 10;
            }

            return iCnt;
        }

        int Power(int Base, int Index)
        {
            int iAns = 1;

            for(int iCnt = 1; iCnt <= Index; iCnt++)
            {
                iAns = iAns * Base;
            }

            return iAns;
        }

    public:
        bool CheckArmstrong(int iNo)
        {
            int iTemp = iNo;
            int iSum = 0;
            int iDigit = 0;
            int iRet = 0;

            int iCount = CountDigits(iNo); 
            
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;

                iRet = Power(iDigit, iCount);

                iSum = iSum + iRet;

                iTemp = iTemp / 10;
            }

            if(iSum == iNo)
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
    int iNo = 0;
    bool bRet = false;

    cout<<"Please enter number : "<<"\n";
    cin>>iNo;

    Digits *nobj = new Digits();

    bRet = nobj->CheckArmstrong(iNo);

    if(bRet == true)
    {
        cout<<iNo<<" is an Armstrong number."<<"\n";
    }
    else
    {
        cout<<iNo<<" is not an Armstrong number."<<"\n";
    }
}
