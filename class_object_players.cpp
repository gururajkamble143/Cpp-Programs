#include<iostream>
using namespace std;
class player
{
	private:
		string name;
		int number, runs;
	public:
		void accept()
		{
			cout<<"\nenter player name = ";
			cin>>name;
			cout<<"\nenter player number = ";
			cin>>number;
			cout<<"\nenter player runs = ";
			cin>>runs;
		}
		void display()
		{
			cout<<"\n"<<name;
			cout<<"\t"<<number;
			cout<<"\t"<<runs;
		}
};
main()
{
	player p[3];
	int n,i;
	cout<<"enter no. of players = ";
	cin>>n,i;
	for(i=0;i<n;i++)
	{
		p[i].accept();
	}
	
	cout<<"\n name\tnumber\truns";
	for(i=0;i<n;i++)
	{
		p[i].display();
	}
}
