#include<iostream>
using namespace std;
class Arithmatic
{
public:
	int iNo1,iNo2;   //characteristics
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
	Arithmatic aobj;
	aobj.Accept();
	iRet=aobj.Addition();
	cout<<"Addition is :"<<iRet<<"\n";
	iRet=aobj.Subtraction();
	cout<<"Subtraction is :"<<iRet<<"\n";
	return 0;
}
