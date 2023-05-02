//Accept N numbers form user and count and perform sum of even elements and odd elements

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iSumEven;
        int iSumOdd;

        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
            iSumEven = 0;
            iSumOdd = 0;
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

        int SumEvenOdd()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSumEven = iSumEven + Arr[iCnt];
                }
                else
                {
                    iSumOdd = iSumOdd + Arr[iCnt];
                }
            }

            cout<<"Sum of Even numbers are : "<<iSumEven<<"\n";
            cout<<"Sum of Odd numbers are : "<<iSumOdd<<"\n";
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    int iLength = 0;
    
    cout<<"Entre number of elements : \n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    
    obj->SumEvenOdd();
    
    return 0;
}