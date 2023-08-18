// CPP supports name mangling

#include<iostream>

int add(int x, int y){  //addii
	return x+y;
}

int add(int x, int y, int z){  //addiii
	return x+y+z;
}

int main(){

	add(11,12);
	add(11,12,13);
}
