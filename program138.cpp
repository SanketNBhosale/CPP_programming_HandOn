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
		fd=open(Name,O_RDONLY);
		if(fd==-1) 
		{
			cout<<"Unable to Open file \n";
			exit(0);
		}
		else
		{
			cout<<"file Succesfully opened \n";
		}
	}
	void ReadData()
	{
		int ret=0;
		char Arr[10];  //if initialise array with \o use cout else use write
		while((ret=read(fd,Arr,10))!=0)
		{
			cout<<* Arr;
		}
		
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
	obj.ReadData();
	return 0;
}