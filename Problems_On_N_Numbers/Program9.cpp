//Accept N numbers form user and one another number and return largest number

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iMax;

        ArrayX(int A)
        {
            iSize = A;
            Arr = new int[iSize];
            iMax = 0;
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

        int ChkLarge()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
            }

            return iMax;
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
    iRet = obj->ChkLarge();
    
    cout<<"Largest number in given elements are : "<<iRet<<"\n";
    return 0;
}