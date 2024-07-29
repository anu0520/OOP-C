#include<iostream>
#include <stdexcept>
class array{
	private:
		int*data;
		int size;
		public:
			array(int size):size(size){
				data=new int[size];
			}
			~array(){
				delete[]data;
			}
			int&operator[](int index){
				if(index<0||index>=size){
					throw std::out_of_range("index out of bounds");
				}
				return data[index];
			}
			const int&operator[](int index)const{
			if(index<0||index>=size){
				throw std::out_of_range("index out of bpunds");
			}
			return data[index];
		}
		int getsize()const{
		return size;
		}
	};
	int main(){
		array arr(20);
		for(int i=0;i<arr.getsize();++i){
			arr[i]=i*20;
		}
		for(int i=0;i<arr.getsize();++i){
			std::cout<<"arr["<<i<<"]="<<arr[i]<<std::endl;
	}
		try{
			std::cout<<arr[20]<<std::endl;
		}catch(const std::out_of_range&e){
			std::cerr<<"exception:"<<e.what()<<std::endl;
		}
	return 0;
}
