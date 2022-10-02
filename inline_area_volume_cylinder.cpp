#include<iostream>
using namespace std;
inline int area(int r, int h)
{
	return 2 * 3.14 * r * (r + h);
}
inline int volume(int r, int h)
{
	return 3.14 * r * r * h;
}
int main()
{
	int r,h;
	cout<<"enter the radius = ";
	cin>>r;
	cout<<"enter the height = ";
	cin>>h;
	
	
	cout<<"area of cylinder = "<<area(r,h)<<endl;
	cout<<"volume of cylinder = "<<volume(r,h)<<endl;
	return 0;
}
