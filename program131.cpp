//input ___Abc___p15___&___AB
//output___cbA___51p___&___BA
//in place word reverse without using any other memory

#include<iostream>
using namespace std;
class StringX
{
public:
	char Str[30];

	void Accept()
	{
		cout<<"Enter String :";
		scanf("%[^'\n']s",Str);
	}
	int Reverse()
	{
		int iCnt=0;
		char *ptr=Str;
		char *start=Str;0
		char *end=Str;
		while(*ptr != '\0')
		{
			if(*ptr==' ')
			{
				while((*ptr==' ') && (*ptr!='\0'))
				{
					ptr++;
				}
			}
			else
			{
				iCnt++;
				while((*ptr!=' ') && (*ptr!='\0'))
				{
					ptr++;
				}

			}
		}
		return iCnt;
	}
};

int main()
{
	int iRet=0;
	StringX obj;
	obj.Accept();
	iRet=obj.WordCount();
	cout<<"Word count is : "<<iRet;
	return 0;
}
