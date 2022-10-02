#include<iostream>
using namespace std;
inline int perimeter(int l, int b)
{
	return 2 * (l + b);
}
inline int area(int l, int b)
{
	return l * b;
}
int main()
{
	int l,b;
	cout<<"enter the lenght = ";
	cin>>l;
	cout<<"enter the bredth = ";
	cin>>b;
	
	
	cout<<"perimeter of rectangle = "<<perimeter(l,b)<<endl;
	cout<<"area of rectangle = "<<area(l,b)<<endl;
	return 0;
}
