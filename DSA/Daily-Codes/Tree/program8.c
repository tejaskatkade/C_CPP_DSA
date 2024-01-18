/*
 *Author name: Tejas katkade
 *module: Queue using linked List
 *
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Queue{

	int data;
	struct Queue* next;
};
struct Queue *head = NULL;
struct Queue *front = NULL;
struct Queue *rear = NULL;


struct Queue* createNode(){
	struct Queue* newNode = (struct Queue*)malloc(sizeof(struct Queue));

	if(newNode == NULL){
		printf(" memory full\n");
		exit(0);
	}

	printf("Enter data in Node\n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;

	return newNode;
}

void enqueue(){

	struct Queue *newNode = createNode();
	if(front == NULL){
		front = rear =  newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}
}

void dequeue(){

	if(rear == NULL){
	
		printf("Queue is Empty\n");
	}else{
		int val = front->data;
		if(front->next == NULL){   // front == rear
			free(front);
			front = NULL;
			rear = NULL;	
		}else{
			struct Queue *temp = front;
		       	front = front->next; 
			free(temp);
				
		}
		printf("val = %d\n",val);
	}
}
void printQueue(){

	if(rear == NULL){
	
		printf("Queue is empty !!\n");
	}else{
		if(front == rear){  // front->next == NULL
			printf("|%d|\n",front->data);
		}else{
			struct Queue *temp = front;
			while(temp->next != NULL){
				printf(" |%d| =>",temp->data);
				temp = temp->next;
			}
			printf(" |%d|\n",temp->data);
		}
	}
}
void main(){

	printf("\t Creating Queue using Linked List\n");
	int ch;
	char choice;
	do{

		printf("1. enqueue\n");
		printf("2. dequeue\n");
		printf("3. printQueue\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				printQueue();
				break;
		
		}
		getchar();
		printf("continue ?\n");
		scanf("%c",&choice);

	}while(choice == 'y'  || choice == 'Y');
}
