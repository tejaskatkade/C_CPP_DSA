#include<iostream>

class Player{

	int jerNo = 10;
	std::string name = "Sachin";

	public:
	void disp(){
		std::cout<<jerNo<<std::endl;
		std::cout<<name<<std::endl;
	
	}
};

int main(){

	Player obj;
	//std::cout<<obj.jerNo<<std::endl;  //error: ‘int Player::jerNo’ is private within this context
	obj.disp();
	return 0;
}
