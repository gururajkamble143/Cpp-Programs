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
	show(p,q);
	
	float s=1.3, f=2.4;
	show(s,f);
	
	char m='a',n='b';
	show(m,n);
}
