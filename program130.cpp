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
	int WordCount()
	{
		int iCnt=0;
		char *ptr=Str;
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
