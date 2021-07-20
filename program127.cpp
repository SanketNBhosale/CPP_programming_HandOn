#include<iostream>
using namespace std;
class StringX
{
public:
	char Str[30];

	void Accept()
	{
		cout<<"Enter String :";
		scanf("%[^'\n']s",&Str);
	}

	void Pattern()
	{
		int iCnt1=0;
		int iCnt2=0;
		char *ptr=Str;
		char *s=Str;
		while(*ptr != '\0')
		{
			while(iCnt2<=iCnt1)
			{
				cout<<*s<<"\t";
				s++;
				iCnt2++;
			}	
			s=Str;   //s pointer reset to str
			ptr++;
			iCnt2=0;
			iCnt1++;
			cout<<"\n";
		}
	}
};

int main()
{
	StringX obj;
	obj.Accept();
	obj.Pattern();
	return 0;
}
