#include<iostream>

class Parent{

	int x = 10;
	public:Parent(){
	       
		       std::cout << "Parent" << std:: endl;
	       } 

		Parent(Parent &obj){
			std::cout << "Copy Parent" << std:: endl;		

		}
		friend std::ostream& operator<<(std::ostream& out, const Parent& obj){
		
			out << "In Parent" << std::endl;
			out << obj.x;
			return out;
		}
};

class Child : public Parent{
	
	int x = 20;
	public:
		Child(){
			std::cout << "Child" << std::endl;
		}
       		Child(Child &obj){

			std::cout<<"Copy child"<<std::endl;
		}	
		friend std::ostream& operator<<(std::ostream& out, const Child& obj){
		
			out << "In Child" << std::endl;
			out << obj.x;
			return out;
		}
};

int main(){

	Child obj1;
	Child obj2;
	std::cout << obj2 << std::endl;
	
	std::cout << (const Parent&)obj1 << std::endl; // No call to copy

	std::cout << "----------------------------" <<std::endl;

	std::cout << ( Parent)obj1<< std::endl;    // copy

	return 0;
}
