// Copy Constructor
// Use to change the data of private variable

#include<iostream>

class Demo{
	int x = 10;   
	int y = 20; 

	public:
		Demo(){
		
			std::cout <<"No arg constructor"<<std::endl;
		}
		Demo(int x, int y){
			this->x = x;
			this->y = y;
		}
		void display(){
		
			std::cout<<"x = "<<x<<std::endl;
			std::cout<<"y = "<<y<<std::endl;

		}

};
int main(){

	Demo obj(100,200);
	obj.display();
	return 0;
}
