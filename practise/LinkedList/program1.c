#include <stdio.h>
#include<stdlib.h>
struct Node{
	char name[50];
	int num;
	struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(){

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	printf("Enter the Player name\n");
	
	int i=0;
	char ch;
	getchar();

	while((ch= getchar()) != '\n'){
		(*newNode).name[i++] = ch;
	}

	printf("Enter the Jersey Number\n");
	scanf("%d",&newNode->num);

	newNode->next = NULL;
	return newNode;
}

void addFirst(){
	printf("In addfirst\n");
	struct Node* newNode = createNode();
	
	if(head == NULL){
	
		head = newNode;

	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

void addLast(){
	printf("In add Last\n");

	struct Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
	
		struct Node* temp = head;
		while(temp->next != NULL){
		
			temp= temp->next;
		}
		temp->next = newNode;
	}
}

int countNode(){
	int cnt = 0;
	struct Node* temp = head;
	if(head != NULL){
		cnt++;
	}
	while(temp->next != NULL){
		cnt++;
		temp=temp->next;
	}
	
	printf("count = %d\n",cnt);
	return cnt;
}
void addAtPos(int pos){

	struct Node* newNode = createNode();
	int count = countNode();
	if(pos < 1 || pos > count++ ){
		printf("Invalide pos\n");
		printf("Enter valid Pos\n");
		scanf("%d",&pos);
		addAtPos(pos);
	}else if(pos == 1){
	
		addFirst();
	}else if(pos ==  count++ ){
		addLast();
	}else{
	
		struct Node* temp = head;
		while(pos-2){
			temp=temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;

	}
}

void printNode(){

	if(head == NULL){
	
		printf("NO Node are available\n");
	}else{
		struct Node* temp = head;	
		
		while( temp != NULL ){	
		printf("%s = %d\n",temp->name,temp->num);
		temp=temp->next;
		}
	}
}

int main(){


	while(1){

		printf("Enter your choice:\n");
		printf("1. AddFirst \n");
		printf("2. AddLast \n");
		printf("3. AddAtPos\n");
		printf("4. Count Nodes\n");
		printf("5. Print Nodes\n");
		printf("6. Exit\n");
	
		int choice;
		scanf("%d",&choice);

			switch(choice){
		
			case 1:
				addFirst();
				break;
			case 2:
				addLast();
				break;
			case 3:
				{
				int pos;
				printf("Enter your position\n");
				scanf("%d",&pos);
				addAtPos(pos);
				}
				break;
				
			case 4:
				countNode();
				break;
			case 5:
				printNode();
				break;
			case 6:
				return 0;
			default:
				printf("Invalid Choice\n");
		}
		
	}

}

