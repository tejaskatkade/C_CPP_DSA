#include <stdio.h>
#include <stdlib.h>

struct demo {

	int data;
	struct demo* next;
};

struct demo* head = NULL;
struct demo* createNode(){
	struct demo* newNode = (struct demo*)malloc(sizeof(struct demo));

	printf("Enter data:\n");
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	return newNode;
}

void addNode(){
	struct demo* newNode = createNode();
	
	struct demo* temp = head;

	if(head == NULL)
		head = newNode;
	else{
		while(temp->next != NULL){
			temp= temp->next;
		}
		temp->next=newNode;
	}

}
void addFirst(){
	struct demo* newNode = createNode();

	newNode->next = head;
	head = newNode;
}
void addAtPos(int pos){
	struct demo* newNode= createNode();
	struct demo* temp = head;

	while(pos-2){
		temp=temp->next;
		pos--;
	}

	newNode->next = temp->next;
	temp->next = newNode;

}
void findNode(){
	struct demo* temp=  head;
	int key,x;
	int loc = 0;
	int flag =0;
	printf("Enter data to find:\n");
	scanf("%d",&key);
	while(temp!=NULL){
		loc++;
		if(key == temp->data){
			flag++;
			x= loc;
		}	
		temp=temp->next;
	}
	printf("Element found %d times",flag);

	if(flag == 1){
		printf("data found at position %d\n",loc);
	}
	if(flag > 1){
		printf("last occurance is %d",x);
	}
	
}
void printLL(){
	printf("Linked List\n");

	struct demo* temp = head;
	while(temp != NULL){
		printf("| %d |",temp->data);
		temp=temp->next;
	}
}
void main()
{
	char yn;
	do{
		printf("1.Create Node\n2.Add Node at first position\n3.Add Node at position\n4.Print Nodes\n5.find node\n");
		int ch;
		printf("Select the Option:\n");
		scanf("%d",&ch);
		
		switch(ch){
		
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:{
				int pos;
				printf("Enter the position:\n");
				scanf("%d",&pos);
				addAtPos(pos);
			       }
				break;
			case 4:
				printLL();
				break;
			case 5:
				findNode();
				break;
			default:
				printf("wrong choice:\n");
		}
		printf("\nDo you want to continue:\nIf YES then enter y or Y\nIf NO then enter n or N\n");
		getchar();
		scanf("%c",&yn);
	
	}while(yn == 'y' || yn =='Y');
}
