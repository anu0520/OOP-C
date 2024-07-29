#include<iostream>
#include<string.h>
using namespace std;
class media
{
	protected:
		char title[50];
		float price;
		public:
			media(char*s,float a)
			{
				strcpy(title,s);
				price=a;
			}
			virtual void display(){}
};
class book:public media
{
	int pages;
	public:
		book(char*s,float a,int p):media(s,a)
		{
			pages=p;
		}
		void display();
};
class tape:public media
{
	float time;
	public:
		tape(char*s,float a,float t):media(s,a)
		{
			time=t;
		}
		void display();
};
void book::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n title:"<<pages;
	cout<<"\n title:"<<price;
}
void tape::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n play time:"<<time<<"mins";
	cout<<"\n price:"<<price;
}
int main()
{
	char*title=new char[30];
	float price,time;
	int pages;
	cout<<"\n enter book details\n";
	cout<<"\n title:";
	cin>>title;
	cout<<"\n price:";
	cin>>price;
	cout<<"\n pages:";
	cin>>pages;
	book book1(title,price,pages);
	cout<<"\n enter tape details";
	cout<<"\n title:";
	cin>>title;
	cout<<"\n price:";
	cin>>price;
	cout<<"\n play times(mins):";
	cin>>time;
	tape tape1(title,price,time);
	media*list[2];
	list[0]=&book1;
	list[1]=&tape1;
	cout<<"\n media details";
	cout<<"\n.........book....";
	list[0]->display();
	cout<<"\n.........tape....";
	list[1]->display();
	return 0;
}
