#include<iostream>
using namespace std;
class bc
{
	public:
		int b;
		void show()
		{
			cout<<"b="<<b<<"\n";
		}
};
class dc:public bc
{
	public:
		int d;
		void show()
		{
			cout<<"b"<<"\n"
			<<"d="<<d<<"\n";
		}
};
int main()
{
	bc*bptr;
	bc base;
	bptr=&base;
	bptr->b=100;
	cout<<"bptr points to base object\n";
	bptr->show();
	dc derived;
	bptr=&derived;
	bptr->b=200;
	cout<<"bptr now points to derived object\n";
	bptr->show();
	dc*dptr;
	dptr=&derived;
	dptr->d=300;
	cout<<"dptr is derived type pointer\n";
	dptr->show();
	cout<<"using((dc*)bptr)\n";
	((dc*)bptr)->d=400;
	((dc*)bptr)->show();
	return 0;
}

