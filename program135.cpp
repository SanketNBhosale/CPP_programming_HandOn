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
		}
		else
		{
			cout<<"file Succesfully opened \n";
		}
	}
	void ReadData(int iNo)
	{
		char Arr[30]={'\0'};  //if initialise array with \o use cout else use write
		read(fd,Arr,iNo);
		cout<<Arr; // or  write(1,Arr,10);   // 1 Monitor ,0 keyboard,2 monitor error

	}
	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30]={'\0'};
	int iValue=0;
	cout<<"Enter file Name :\n";
	cin>>str;
	cout<<"Enter Number of elements :\n";
	cin>>iValue;
	FileX obj(str);
	obj.ReadData(iValue);
	return 0;
}