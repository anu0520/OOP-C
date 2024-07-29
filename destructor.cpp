#include<iostream>
using namespace std;
class class_name{
	private:
		int a,b;
		public:
			class_name(int aa,int bb)
			{
				cout<<"constructor is called"<<endl;
				a=aa;
				b=bb;
				cout<<"value pf a:"<<a<<endl;
				cout<<"value of b:"<<b<<endl;
				cout<<endl;
			}
			~class_name()
			{
				cout<<"destructor is called"<<endl;
				cout<<"value of a:"<<a<<endl;
				cout<<"value of b:"<<b<<endl;
			}
		};
		int main()
		{
		class_name obj(5,12);
		return 0;
}
