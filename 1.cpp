#include<iostream>
class complex{
	private:
		double real;
		double imag;
		public:
			complex(double r=0,double i=0):real(r),imag(i){}
			complex operator+(const complex&other)const{
			return complex(real+other.real,imag+other.imag);
			}
			void display()const{
			std::cout<<real<<"+"<<imag<<"i"<<std::endl;
		}
	};
	int main(){
		complex c1(3.0,4.0);
		complex c2(1.0,2.0);
		complex c3=c1+c2;
		std::cout<<"c1:";
		c1.display();
		std::cout<<"c2:";
		c2.display();
		std::cout<<"c1+c2=";
		c3.display();
		return 0;
	}
