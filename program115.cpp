#include<iostream>
using namespace std;
int Addition(int iNo1,int iNo2)
{
	int Add=iNo1 + iNo2;
	return Add;
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	cout<<"Enter First Number \n";
	cin>>iValue1;
	cout<<"Enter Second Number \n";
	cin>>iValue2;
	iRet=Addition(iValue1,iValue2);
	cout<<"Addition of "<<iValue1<<" and "<<iValue2<<"is : "<<iRet<<"\n";
	return 0;
}
