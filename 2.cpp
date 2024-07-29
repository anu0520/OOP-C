#include<iostream>
class counter{
	private:
		int value;
		public:
			counter(int v=0):value(v){}
			counter&operator++(){
				++value;
				return*this;
			}
			counter operator++(int){
				counter temp=*this;
				++value;
				return temp;
			}
			void display()const{
			std::cout<<"counter value:"<<value<<std::endl;
			}
};
int main(){
	counter c(5);
	std::cout<<"initial value:";
	c.display();
	++c;
	std::cout<<"after prefix ++:";
	c.display();
	c++;
	std::cout<<"after postfix ++:";
	c.display();
	return 0;
}
