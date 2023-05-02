//Accept N numbers form user and one another number and display last occourence of that number

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iNo;

        ArrayX(int A,int B)
        {
            iSize = A;
            iNo = B;
            Arr = new int[iSize];
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

        int ChkLast()
        {
            int iCnt = 0;

            for(iCnt = (iSize-1); iCnt >= 0; iCnt--)
            {
                if(Arr[iCnt] == iNo)
                {
                    break;
                }
            }

            return iCnt;
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

    cout<<"Entre number to check presence : \n";
    cin>>iValue;

    ArrayX *obj = new ArrayX(iLength,iValue);

    obj->Accept();
    iRet = obj->ChkLast();

    if(iRet == -1)
    {
        cout<<iValue<<" is not there.\n";
    }
    else
    {
        cout<<iValue<<" occoured last time at index : "<<iRet<<"\n";    
    }
    
    delete obj;

    return 0;
}