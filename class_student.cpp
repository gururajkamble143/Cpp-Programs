#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		string name, address;
		float percentage;
	public:
		void accept()
		{
			cout<<"enter roll_no. = ";
			cin>>roll_no;
			cout<<"enter name of the student = ";
			cin>>name;
			cout<<"enter the address = ";
			cin>>address;
			cout<<"enter the percentage = ";
			cin>>percentage;
		}
		void display()
		{
			cout<<"\n roll no "<<roll_no;
			cout<<"\n name "<<name;
			cout<<"\n address "<<address;
			cout<<"\n percentage "<<percentage;
		}
};
main()
{
	student s1;
	s1.accept();
	s1.display();
}
