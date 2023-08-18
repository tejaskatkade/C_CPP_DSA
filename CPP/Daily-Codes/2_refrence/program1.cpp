//Refrence variable

//Refrence variable should be initialize compulsory. 

#include<iostream>

int main(){

	int x = 10;
	int &y = x;


	std::cout<<&x<<std::endl;  //0x7fff4a440c2c
	std::cout<<&y<<std::endl;  //0x7fff4a440c2c

	return 0;
}
