#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("file_2_write.cpp",ios::out);
	
	char data[25]="welcome to cpp, GURU";
	fout<<data;
	fout.close();
}
