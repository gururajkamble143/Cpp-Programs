#include<iostream>
using namespace std;
class reverse
{
	private:
		int n,i;
	public:
		void revers()
		{
			cout<<"\n enter any number = ";
			cin>>n;
		}
		friend void show(reverse rev);
};
void show(reverse rev)
{
	int i,rem,revs=0;
	cout<<"reverse number = ";
	while(rev.n!=0)
	{
		rem=rev.n%10;
		revs=revs*10+rem;
		rev.n=rev.n/10;
	}
	cout<<revs;
}
int main()
{
	reverse rev;
	rev.revers();
	show(rev);
}
