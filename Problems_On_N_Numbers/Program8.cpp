//Accept N numbers form user and one another number and return the index at which that number occours for the first time

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iNo;

        ArrayX(int A, int B)
        {
            iSize = A;
            Arr = new int[iSize];
            iNo = B;
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
                    break;
                }
            }

            if(iCnt == iSize)
            {
                return -1;
            }
            else
            {
                return iCnt;
            }
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
    int iRet = 0;
    
    cout<<"Entre number of elements : \n";
    cin>>iLength;

    cout<<"Entre number to check Frequency : \n";
    cin>>iValue;

    ArrayX *obj = new ArrayX(iLength,iValue);

    obj->Accept();
    iRet = obj->ChkPresence();
    
    if(iRet != -1)
    {
        cout<<iValue<<" is there in given elements at index : "<<iRet<<"\n";    
    }
    else
    {
        cout<<iValue<<" is not there in given elements at index : "<<iRet<<"\n";
    }

    return 0;
}