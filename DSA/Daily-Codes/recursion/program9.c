#include<stdio.h>
int fun(int N){
	if(N<=1){
		return 1;
	}
	return fun(N-1)+fun(N-2);
}

void main(){
	int N = 4;
	int val = fun(4);
	printf("%d\n",val);

}
