#include<iostream>
using namespace std;
class book
{
	protected:
		string author;
	public:
		void get_b()
		{
			cout<<"enter the book author name = ";
			cin>>author;
		}
};
class audio_casette
{
	protected:
		float playing_time;
	public:
		void get_a()
		{
			cout<<"enter the playing time of song = ";
			cin>>playing_time;
		}
};
class publication : public book, public audio_casette
{
	protected:
		string title;
		int price;
	public:
		void get_p()
		{
			cout<<"enter book title = ";
			cin>>title;
			cout<<"enter book price = ";
			cin>>price;
		}
		void show_p()
		{
			cout<<"\nauthor name = "<<author;
			cout<<"\nplaying time = "<<playing_time;
			cout<<"\nbook title= "<<title;
			cout<<"\nbook price = "<<price;
		}
};
main()
{
	publication p1;
	p1.get_b();
	p1.get_a();
	p1.get_p();
	p1.show_p();
}
