//Accept N numbers form user and display numbers in reverse

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int A)
        {
            iSize = A;
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

        void Reverse()
        {
            int iCnt = 0;

            for(iCnt = (iSize-1); iCnt >= 0; iCnt--)
            {
                cout<<Arr[iCnt]<<"\t";
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
    
    cout<<"Entre number of elements : \n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    obj->Reverse();
    
    delete obj;

    return 0;
}