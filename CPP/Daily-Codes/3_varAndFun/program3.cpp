// variable shadowing

#include<iostream>

int main(){

	int x = 10;
	{
	
		int x = 20;
		std::cout<<x<<std::endl; // 20 // variable shadowing

		x = 30;
		std::cout<<x<<std::endl; // 30
	}
	return 0;

}
