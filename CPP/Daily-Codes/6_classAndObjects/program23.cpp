// Default parameters in cpp

#include<iostream>
class Demo{

	int x = 10;
	int y = 20;
	
	public:
		Demo(){
		
			std::cout<<"NO arg"<<std::endl;
		}
		Demo(int x = 50, int y = 30){
		
			std::cout<<"Parameterized"<<std::endl;

		}
};
int main(){
	Demo obj;  //error: call of overloaded ‘Demo()’ is ambiguous
	return 0;
}
