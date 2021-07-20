#include<iostream>
using namespace std;

int Addition(int Arr[], int iSize)
{
    int iSum = 0, i = 0;
    if((Arr == NULL) || (iSize <= 0))
    {
        return 0;
    }
    for(i =0;i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int *Arr = NULL;
    int iSize = 0, i = 0,iRet = 0;
    cout<<"Enter number of elements\n";
    cin>>iSize;
    Arr = new int[iSize];   // Arr= (int *)malloc(sizeof(int));
    cout<<"Enter the values\n";
    for(i = 0; i <iSize; i++)
    {   
    	cin>>Arr[i];
    }
    iRet = Addition(Arr,iSize);
    cout<<"Addition is : "<<iRet;
    delete []Arr;   // free(Arr);
    return 0;
}
