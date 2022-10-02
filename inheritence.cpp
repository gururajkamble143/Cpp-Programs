#include<iostream>
using namespace std;
class college
{
	protected:
		int centre_no;
		char col_name[20];
	public:
		void accept()
		{
			cout<<"enter centre no. = ";
			cin>>centre_no;
			cout<<"enter college name = ";
			cin>>col_name;
		}
};

class student : public college
{
	protected:
		int roll_no;
		char name[20];
		float marks;
	public:
		void getdata()
		{
			cout<<"\n enter roll no. = ";
			cin>>roll_no;
			cout<<"\n enter student name = ";
			cin>>name;
			cout<<"\nenter marks = ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n enter centre no = "<<centre_no;
			cout<<"\n enter college name = "<<col_name;
			cout<<"\n enter roll no = "<<roll_no;
			cout<<"\n enter student name = "<<name;
			cout<<"\n enter marks = "<<marks;
		}
};
main()
{
	student s1;
	s1.accept();
	s1.getdata();
	s1.display();
}
