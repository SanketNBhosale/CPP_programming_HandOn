#include<iostream>
using namespace std;
class NumberX
{
public:
	int iNo;

	void Accept()
	{
		cout<<"Enter Number :";
		cin>>iNo;
	}
	void Pattern()
	{
		int iValue=iNo;
		int iCnt=0;
		while(iValue>0)
		{
			iCnt++;
			iValue=iValue/10;
		}
		iValue=iNo;
		for(int i=iCnt;i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				cout<<iValue%10<<"\t";
				iValue=iValue/10;
			}
			cout<<"\n";
			iValue=iNo;
		}

	}
};

int main()
{
	NumberX obj;
	obj.Accept();
	obj.Pattern();
	return 0;
}
