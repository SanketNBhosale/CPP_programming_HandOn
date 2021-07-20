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
		fd=open(Name,O_WRONLY);
		if(fd==-1) 
		{
			cout<<"Unable to Open file \n";
			exit(0);
		}
		else
		{
			cout<<"file Succesfully Written \n";
		}
	}
	void writeData()
	{
		char str[]="PUNE";
			write(fd,str,4);
		
	}
	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30]={'\0'};
	cout<<"Enter file Name :\n";
	cin>>str;
	FileX obj(str);
	obj.writeData();
	return 0;
}