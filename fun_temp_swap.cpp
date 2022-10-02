#include<iostream>
using namespace std;
//function template
template<class T>
void show(T a,T b)
{
	cout<<"\n a = "<<a<<"\tb = "<<b<<endl;
}

main()
{
	int p=10,q=20;
	show(q,p);
}
