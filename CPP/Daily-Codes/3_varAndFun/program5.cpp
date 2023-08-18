#include <iostream>

int x = 100;
int main(){
	int x = 10;
	{
		int x = 20;
		std::cout << x << std::endl << ::x <<std::endl;  // Scope resolution checks for global value;
	}
	return 0;
}
