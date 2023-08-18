#include <iostream>
void fun(int * ptr1, int *ptr2){
	*ptr1 = 40;
}

int main(){

	int x = 10;
	int &y = x;

	std::cout << x << y << std::endl;
	fun(&x,&y);
	std::cout << x << y << std::endl;
	return 0;

}

