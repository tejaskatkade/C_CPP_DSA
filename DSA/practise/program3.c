//Prime num (optimized)

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int num){
	int cnt = 0;
	int s = sqrt(num);
	for(int i=2; i<=s; i++){
		if(num%i == 0){
			cnt++;
		}
	}
	if(cnt > 0){
		return 0;
	}else
		return 1;
}

void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	bool val = isPrime(num);

	printf("%d\n",val);
}
