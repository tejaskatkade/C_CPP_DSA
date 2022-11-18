#include<stdio.h>


int max[10][10];
int allocation[10][10];
int need[10][10];

int avail[10];
int np,nr;
void readmatrix(int matrix[10][10]){
	for(int i=0;i<np; i++){
		for(int j=0; j<nr; j++){
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
}

void displaymatrix(int matrix[10][10]){
	for(int i=0; i<np; i++){
		for(int j=0; j<nr; j++){
			printf("%d",matrix[i][j]);
		}printf("\n");
	}
}
void cal_need(){
	for(int i=0; i<np; i++){
		for(int j=0; j<nr; j++){
			need[i][j]=max[i][j]-allocation[i][j];
		}printf("\n");
	}
}
void banker(){
	int flag;
	int k=0;
	int finish[10];
	int safe_seq[10];

	for(int i=0; i<np; i++){
		finish[i]=0;
	}
	for(int i=0; i<np; i++){
		flag=0;
		//execute incomplete process:
		if(finish[i]==0){
			for(int j=0; j<nr; j++){
				if(need[i][j]>avail[j])		
				{	
					flag=1;
					break;
				}
		       	}
	
			if(flag == 0) //Need is less than available;
			{
				finish[i]=1;
				safe_seq[k]=i;
				k++;
				//New Available
				for(int j=0; j<nr; j++){
					avail[j]+=allocation[i][j];
				}
				i=-1; //check again from 1st process.
			}

		}
	}
	//check if all  processes are completed
	flag =0;
	for(int i=0; i<np; i++){
		if(finish[i]==0){
			printf("the system is in deadlock\n");
			flag =1;
			break;
		}
	}
	if(flag==0){
		printf("The system is in safe state !\n Safe sequence is ==>");
		for(int i=0; i<np; i++)
			printf("p%d",safe_seq[i]);
	}
	
}
int main(){

	//inputs
	
	printf("Enter the number of processes\n");
	scanf("%d",&np);

	printf("Enter the number of resources\n");
	scanf("%d",&nr);

	printf("Enter the initial allocation matrix\n");
	readmatrix(allocation);

	printf("Enter the Maximum requirements\n");
	readmatrix(max);
	
	printf("Enter the Available resources\n");
	for(int j =0; j<nr; j++){
		scanf("%d",&avail[j]);
	}
	//Display Entered data;
	
	printf("=======Entered Data ========\n");
	printf("Initial allocation\n");
	displaymatrix(allocation);

	printf("Max requirements\n");
	displaymatrix(max);

	printf("Available Resources\n");
	for(int j=0; j<nr; j++){
		printf("%d",avail[j]);
	}
	//Need
	cal_need();
	printf("Need is:\n");
	displaymatrix(need);

	banker();
	return 0;
}
