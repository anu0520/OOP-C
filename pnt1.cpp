#include<iostream>
using namespace std;
int main(){
	int number=42;
	int*ptr=&number;
	cout << "The value of the integer is: " << *ptr << endl;
	return 0;
}
