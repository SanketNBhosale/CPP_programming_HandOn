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
	void Accept()   //behavior
	{
		cout<<"Enter First Number \n";
		cin>>iNo1;
		cout<<"Enter Second Number \n";
		cin>>iNo2;
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
	Arithmatic aobj1(10,20);
	Arithmatic aobj2(20,10);
	iRet=aobj1.Addition();
	cout<<"Addition is :"<<iRet<<"\n";
	iRet=aobj2.Subtraction();
	cout<<"Subtraction is :"<<iRet<<"\n";
	return 0;
}
