//5. 

#include<stdio.h>
#include<stdlib.h>

typedef struct demo{

	int data;
	struct demo *next;
}demo;

demo* head = NULL;

void addNode(){
	demo* newNode = (demo*)malloc(sizeof(demo));

	printf("Enter data\n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		demo* temp = head;
		while(temp->next != NULL){
		
			temp= temp->next;
		}
		temp->next = newNode;
	}

}
void countnodes(){
	demo* temp = head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\nTotal nodes %d\n",count);
}

void addition(){
	int add=0;
	demo* temp = head;
	while(temp->next!=NULL){
		temp= temp->next;
	}
	add = (head->data) +  (temp->data);
	printf("Addition of first & last data is %d\n",add);
}
void printLL(){
	demo* temp = head;
	while(temp != NULL){
		
		printf("| %d |",temp->data);
		temp=temp->next;
	}
}


void main(){
	int num;
	printf("How many nodes do you want:\n");
	scanf("%d",&num);
	for(int i=0; i< num; i++){
		addNode();
	}

	printLL();
	addition();
	countnodes();
}
