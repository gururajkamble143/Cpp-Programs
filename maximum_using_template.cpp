#include<iostream>
using namespace std;
template<class T>
T maximum(T a,T b)
{
	return (a > b) ?  a : b;
}
main()
{
	int a,b;
	
	cout<<"enter two values = ";
	cin>>a>>b;
	int m =maximum(a,b);
	cout<<"maximum"<<m<<endl;
}
