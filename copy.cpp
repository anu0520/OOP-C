#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		public:
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
							person obj1("anu",10);
							obj1.display();
							person obj2(obj1);
							obj2.display();
							return 0;
						}
															
