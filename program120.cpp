#include<iostream>
using namespace std;
class Arithmatic
{
public:
	int iNo1,iNo2;   //characteristics
	Arithmatic(int X,int Y)   //constructor
	{
		iNo1=X;
		iNo2=Y;
	}
	int Addition()    //behavior
	{
		int iResult=0;
		iResult=iNo1+iNo2;
		return iResult;
	}
	int Subtraction()    //behavior
	{
		int iResult=0;
		iResult=iNo1-iNo2;
		return iResult;
	}
	
};
int main()
{

	int iRet=0;
	int iValue1=0;
	int iValue2=0;
	cout<<"Enter first Number  :\n";
	cin>>iValue1;
	cout<<"Enter second Number  :\n";
	cin>>iValue2;
	Arithmatic aobj1(iValue1,iValue2);
	Arithmatic aobj2(iValue2,iValue1);
	iRet=aobj1.Addition();
	cout<<"Addition is :"<<iRet<<"\n";
	iRet=aobj2.Subtraction();
	cout<<"Subtraction is :"<<iRet<<"\n";
	return 0;
}
