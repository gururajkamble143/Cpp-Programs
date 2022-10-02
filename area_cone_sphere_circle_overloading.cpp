#include<iostream>
#include<cmath>
using namespace std;
//function overloading
int area(int r, int h)	//area of cone
{
	return 3.14 * r * (r + sqrt((h * h)) + (r * r));
}
double area(int r)	//area of sphere
{
	return 4 * 3.14 * r * r;
}
long int area(long int r)	//area of circle
{
	return 3.14 * r * r;
}
main()
{
	cout<<"\n area of cone= "<<area(2,3);
	cout<<"\n area of sphere= "<<area(3);
	cout<<"\n area of circle= "<<area(3);
}

