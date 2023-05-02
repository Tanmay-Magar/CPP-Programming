//Accept N numbers form user and count even numbers

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iCount;

        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
            iCount = 0;
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

        int CountEven()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iCount++;
                }
            }

            return iCount;
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
    
    iRet = obj->CountEven();
    cout<<"Total even numbers are : "<<iRet<<"\n";

    return 0;
}