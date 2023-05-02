//Accept N numbers form user and return its avarage

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iNo)
        {
            iSize = iNo;
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

        int Average()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return(iSum/iSize);
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
    
    iRet = obj->Average();
    cout<<"Average is : "<<iRet<<"\n";

    return 0;
}
