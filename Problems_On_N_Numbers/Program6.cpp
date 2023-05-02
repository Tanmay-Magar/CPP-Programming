//Accept N numbers form user and one another number and check whether that number is there or not

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iNo;
        bool flag;

        ArrayX(int A, int B)
        {
            iSize = A;
            Arr = new int[iSize];
            iNo = B;
            flag = false;
        }

        void Accept()
        {
            int i = 0;

            if(*Arr == NULL)
            {
                cout<<"Unable to allocate memory...\n";
                return;
            }

            cout<<"Entre elements : \n";

            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        int ChkPresence()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    flag = true;
                    break;
                }
            }

            return flag;
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    int iLength = 0;
    int iValue = 0;
    bool bRet = 0;
    
    cout<<"Entre number of elements : \n";
    cin>>iLength;

    cout<<"Entre number to check Frequency : \n";
    cin>>iValue;

    ArrayX *obj = new ArrayX(iLength,iValue);

    obj->Accept();
    bRet = obj->ChkPresence();
    
    if(bRet == true)
    {
        cout<<iValue<<" is there in given elements."<<"\n";    
    }
    else
    {
        cout<<iValue<<" is not there in given elements."<<"\n";
    }

    return 0;
}