//Accept N numbers form user and return smallest number

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iSmall;

        ArrayX(int A)
        {
            iSize = A;
            Arr = new int[iSize];
            iSmall = 0;
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

        int ChkSmall()
        {
            int iCnt = 0;
            int iSmall = Arr[0];

            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                if(iSmall > Arr[iCnt])
                {
                    iSmall = Arr[iCnt];
                }
            }

            return iSmall;
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    
    cout<<"Entre number of elements : \n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    iRet = obj->ChkSmall();
    
    cout<<"Smallest number in given elements are : "<<iRet<<"\n";
    
    delete obj;

    return 0;
}