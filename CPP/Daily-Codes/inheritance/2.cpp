#include<iostream>

class Parent{

	int x = 10;
	public: 
		friend std::ostream& operator<<(std::ostream& out, const Parent& obj){
		
			out << "In Parent" << std::endl;
			out << obj.x;
			return out;
		}
};

class Child : public Parent{
	
	int x = 20;
	public: 
		friend std::ostream& operator<<(std::ostream& out, const Child& obj){
		
			out << "In Child" << std::endl;
			out << obj.x;
			return out;
		}
};

int main(){

	Child obj;
	std::cout << obj << std::endl;
	
	std::cout << (const Parent&)obj << std::endl;  // if there is no method in child class then internally this happents; and parents method get called on child object , It is upcasting (typecasting).
	
	return 0;
}
