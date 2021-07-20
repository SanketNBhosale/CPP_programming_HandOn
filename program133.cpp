#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

class FileX
{
public:
	int fd;
	FileX(char Name[])
	{
		fd=open(Name,O_RDONLY | O_CREAT);
		if(fd==-1)
		{
			cout<<"Unable to open file \n";
		}
		else
		{
			cout<<"file Succesfully Opened";
		}
	}
	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];
	cout<<"Enter file Name :\n";
	cin>>str;
	FileX obj(str);
	return 0;
}