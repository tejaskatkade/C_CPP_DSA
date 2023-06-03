#include<iostream>
void fun(){

	std::cout<<"IN fun2"<<std::endl;
}

/*
$ g++ program2.cpp program3.cpp

/usr/bin/ld: /tmp/ccAcqL2Q.o: in function `fun()':
program3.cpp:(.text+0x0): multiple definition of `fun()'; /tmp/cchdFWUP.o:program2.cpp:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
*/					  
