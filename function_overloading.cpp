#include<iostream>
using namespace std;
//function overloading
int area(int l, int b)
{
	return l*b;
}
double area(int r)
{
	return 3.14*r*r;
}
main()
{
	cout<<"\n area of rectangle= "<<area(2,3);
	cout<<"\n area of cirle= "<<area(3);
}
