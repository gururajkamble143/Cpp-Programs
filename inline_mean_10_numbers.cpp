#include<iostream>
using namespace std;
inline int mean(int a,int b,int c,int d,int e, int f,int g,int h,int i,int j)
{
	return (a+b+c+d+e+f+g+h+i+j)/10;
}

int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	cout<<"enter 1st number = ";
	cin>>a;
	cout<<"enter 2nd number = ";
	cin>>b;
	cout<<"enter 3rd number = ";
	cin>>c;
	cout<<"enter 4th number = ";
	cin>>d;
	cout<<"enter 5th number = ";
	cin>>e;
	cout<<"enter 6th number = ";
	cin>>f;
	cout<<"enter 7th number = ";
	cin>>g;
	cout<<"enter 8th number = ";
	cin>>h;
	cout<<"enter 9th number = ";
	cin>>i;
	cout<<"enter 10th number = ";
	cin>>j;
	
	cout<<"mean of 10 numbers = "<<mean(a,b,c,d,e,f,g,h,i,j)<<endl;
	return 0;
}
