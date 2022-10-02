#include<iostream>
using namespace std;
void sort(int a[5])
{
	int i,j,p;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
		cout<<"\n display array = ";
	for(i=0;i<=4;i++)
	{
		cout<<"\t"<<a[i];
	}
}
void sort(float b[5])
{
	int i,j;
	float p;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(b[i]>b[j])
			{
				p=b[i];
				b[i]=b[j];
				b[j]=p;
			}
		}
	}
	cout<<"\n display array = ";
	for(i=0;i<=4;i++)
	{
		cout<<"\t"<<b[i];
	}
}
main()
{
	int a[5],j,i;
	float b[5];
	cout<<"\n enter int array = ";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	sort (a);
	
		cout<<"\n enter float array = ";
	for(i=0;i<=4;i++)
	{
		cin>>b[i];
	}
	sort (b);
}
