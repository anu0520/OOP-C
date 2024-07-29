#include<iostream>
int main(){
	float number=3.14f;
	float*ptr= &number;
	std::cout<<"the value of the float is:"<<*ptr<<std::endl;
	return 0;
}
