#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
			person(string person_name)
			{
				cout<<"constructor to sedt name is called"<<endl;
				name=person_name;
				age=20;
			}
			person(int person_age)
			{
				cout<<"consstructor to set age is called"<<endl;
	    name="anu";
		age=age=person_age;
			}
			person(string person_name,int person_age)
			{
				cout<<"constructor for both name and age is called"<<endl;
				name=person_name;
				age=person_age;
			}
			void display()
			{
				cout<<"name of current object:"<<name<<endl;
				cout<<"age of current object:"<<age<<endl;
				cout<<endl;
							}
};
int main()
{
	person obj1("first person");
	obj1.display();
	person obj2(25);
	obj2.display();
	person obj3("second person",15);
	obj3.display();
	return 0;
}
