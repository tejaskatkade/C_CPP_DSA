#include<stdio.h>
void main(){
	printf("%ld\n",sizeof(FILE));  //216

	printf("%d\n",(*stdin)._fileno);  
	printf("%d\n",stdin->_fileno);  
	
	printf("%d\n",(*stdout)._fileno);  
	printf("%d\n",(*stderr)._fileno);  
	
	
	

	






}
