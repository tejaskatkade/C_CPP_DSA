#include<iostream>

int main(){

	int cout = 10;
	std::cout << cout << std::endl;  // std -> standard namespace
	return 0;
}
/*
using namespace std;
int main(){

	int cout = 10;
	cout << cout << endl;  // std -> standard namespace
	return 0;
}
 error: invalid operands of types ‘int’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’
   14 |  cout << cout << endl; */


