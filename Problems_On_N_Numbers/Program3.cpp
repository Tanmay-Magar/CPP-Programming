//Accept N numbers form user and count and display even and odd numbers

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iCountEven;
        int iCountOdd;

        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
            iCountEven = 0;
            iCountOdd = 0;
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

        int CountEvenOdd()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iCountEven++;
                }
                else
                {
                    iCountOdd++;
                }
            }

            return iCountOdd;

            // cout<<"Even numbers are : "<<iCountEven<<"\n";
            // cout<<"Odd numbers are : "<<iCountOdd<<"\n";
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
    
    iRet = obj->CountEvenOdd();
    cout<<"Total even numbers are : "<<iRet<<"\n";

    cout<<"Total odd numbers are : "<<(iLength-iRet)<<"\n";

    return 0;
}