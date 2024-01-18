#include<iostream>

class Player{

	public:
	int jerNo;
	std::string name;

	//public:
	void info(){                
	
		std::cout<<this<<std::endl;
		std::cout<<this->jerNo<<std::endl;
		std::cout<<(*this).name<<std::endl;

	}
};
int main(){
	Player obj{18, "Virat"};
	obj.info();

	Player *obj1 = new Player();
	obj1->jerNo = 7;
	obj1->name = "MSD";

	obj1->info();

	return 0;
}
