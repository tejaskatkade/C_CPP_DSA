
// Scope resolution operator are used only on global variable

#include<iostream>

int y = 100;

int main(){

	int x = 10;
	std::cout<<x<<std::endl; //10

	{
	
		int x = 20;
		std::cout<<x<<std::endl;   // 20
		std::cout<<::y<<std::endl;  // 100 ( :: => scope resulution operator)
			
   
		x = 30;
		std::cout<<x<<std::endl; // 30 
//		std::cout<<::x<<std::endl;   // error :x is not a global var
	}
	std::cout<<x<<std::endl;  // 10

	return 0;

}
