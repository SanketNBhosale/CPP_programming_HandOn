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
		fd=creat(Name,0777);
		if(fd==-1) 
		{
			cout<<"Unable to Create file \n";
		}
		else
		{
			cout<<"file Succesfully Created";
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