#include<iostream>

void fun(int &ref1, int &ref2){

	std::cout<<"In refrence "<<std::endl;
}
void fun(int ref1, int ref2){

	std::cout<<"In Normal "<<std::endl;
}
int main(){

	int x = 10;
	int y =20;
	
	fun(x,y);  // error: call of overloaded ‘fun(int&, int&)’ is ambiguous
	
	return 0;

}
