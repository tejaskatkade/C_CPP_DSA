#include<iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:
	void info(){                // info(Demo this);
	
		std::cout<<this<<std::endl;
		//std::cout<<this<<std::endl;
		std::cout<<this->x<<std::endl;
		std::cout<<(*this).y<<std::endl;

	}
};
int main(){

	Demo obj;     //Demo(&obj);
	
	// std::cout<<obj<<std::endl;   //  error: no match for ‘operator<<’
	std::cout<<&obj<<std::endl;

	obj.info();    //info(&obj);
	return 0;
}
