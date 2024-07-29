#include<iostream>
#include<string>
class person{
	private:
		std::string name;
		int age;
		public:
			person(const std::string&n,int a):name(n),age(a){}
			friend std::ostream&operator<<(std::ostream&out,const person&p);
						};
						std::ostream&operator<<(std::ostream&out,const person&p){
							out<<"name:"<<p.name<<",age:"<<p.age;
							return out;
						}
						int main(){
							person person("nithesh",20);
							std::cout<<person<<std::endl;
							return 0;
						}
