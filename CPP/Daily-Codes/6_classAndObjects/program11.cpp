// static   -stored in data section
#include<iostream>

int fun(){

	static int x = 10;
	return ++x;
}

int main(){

	for(int i=0; i<3; i++){
	
		std::cout<<fun()<<std::endl;
	}
	return 0;
}
