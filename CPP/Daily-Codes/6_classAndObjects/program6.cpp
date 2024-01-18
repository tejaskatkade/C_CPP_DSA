#include <iostream>

class Company{
	int empCount = 5000;
	std::string name = "IBM";

	public:
	Company(){
	
		std::cout<<"Company Constructor"<< std::endl;
	}
	void compInfo(){
	
		std::cout<<empCount<<std::endl;
		std::cout<<name<<std::endl;
	}
};
class Employee{
	int empID = 101;
	float empSal = 95.000f;

	public:
	Employee(){
	
		std::cout<<"Employee Constructor"<< std::endl;
	}
	void empInfo(){
		
		Company obj;
		std::cout<<empID<< std::endl;
		std::cout<<empSal<< std::endl;

		obj.compInfo();
	}
};
int main(){


	Employee *emp = new Employee();
	emp->empInfo();

	return 0;
}
// Employee Constructor
// Company Constructor
// 101
// 95
// 5000
// IBM
