#include<iostream>
#include<stdexcept>
unsigned long long factorial_recursive(int n){
	if(n<0){
		throw std::invalid_argument("factorial is not defined for negative numbers");
	}else if(n==0||n==1){
		return 1;
	}else{
		return n*factorial_recursive(n-1);
	}
}
int main(){
	int number=5;
	try{
		std::cout<<"factorial of"<<number<<"is"<<factorial_recursive(number)<<std::endl;
	}catch(const std::invalid_argument&e){
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}




