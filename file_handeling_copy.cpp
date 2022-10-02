#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("file_3_copy.cpp");
	
	ofstream fout;
	fout.open("file_4_copy.cpp");
	
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
}
