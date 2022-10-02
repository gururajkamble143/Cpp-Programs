//program to read from a file

#include<fstream>
#include<iostream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("file_1_read.cpp",ios::in);
	char ch;
	
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
}
