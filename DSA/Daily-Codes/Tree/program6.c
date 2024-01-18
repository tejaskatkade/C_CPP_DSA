// Implementing stack using linkedList

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Stack{

	int data;
	struct Stack *next;
};

struct Stack* top = NULL;

void push(int val){
	struct Stack * newNode = malloc(sizeof(struct Stack));
	newNode->data = val;
	newNode->next = top;
	top = newNode;	

}
bool isEmpty(){

	if(top == NULL){
	
		return true;
	}else{
	
		return false;
	}

}
int pop(){

	if(isEmpty()){
	
		printf("Stack is empty\n");
		return -1;
	}else{
		struct Stack* temp = top;
		int x = temp->data;
		top = top->next;
		free(temp);
		return x;
	}
}
void display(){
	if(isEmpty()){
	
		printf("Stack is empty\n");
	}else{
	
		struct Stack* temp = top;
		while(temp != NULL){
		
			printf("%d\n",temp->data);
			temp= temp->next;
		}
	}

}

void main(){

	int choice;
	int val;
	char ch;
	
	do{
	
		printf("1. push\n");
		printf("2 pop\n");
		printf("3. display\n");

		printf("Enter choice\n");
		scanf("%d",&choice);


		switch(choice){
		
			case 1:
				printf("Enter value :");
				scanf("%d",&val);
				push(val);

				break;
			case 2:
				val = pop();
				if(val == -1){
				
				}else{
				
					printf("popped element is %d\n",val);
				}
				break;
			case 3:
				display();
				break;
		}
		getchar();
		printf("Continue ?\n");
		scanf("%c",&ch);

	}while(ch == 'Y' || ch == 'y');
}
