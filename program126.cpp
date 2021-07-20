#include<iostream>
using namespace std;
class StringX
{
public:
	char Str[30];

	void Accept()
	{
		cout<<"Enter String :";
		cin>>Str;
	}

	int StrlenX()
	{
		int iCnt=0;
		char *ptr=Str;
		while(*ptr !='\0')
		{
			ptr++;
			iCnt++;
		}
		return iCnt;
	}
};

int main()
{
	int Ret=0;
	StringX obj;
	obj.Accept();
	Ret=obj.StrlenX();
	cout<<"Length of string is: "<<Ret;
	return 0;
}
