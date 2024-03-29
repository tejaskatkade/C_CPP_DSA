//Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node* prev;
	int data;
	struct Node* next;
};
struct Node* head = NULL;

struct Node* createNode(){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	struct Node* prev =NULL;
	printf("Enter the data:\n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;

	return newNode;
}
void addNode(){
	struct Node* newNode = createNode();

	struct Node* temp = head;

	if(head == NULL){
		head = newNode;
	}else{
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	
	}
}
int nodeCount(){	
	struct Node* temp = head;

	int count = 0;

	while(temp != NULL){
		count++;
		temp=temp->next;
	}
	//printf("count = %d\n",count);
	return count;

}

void addFirst(){
	struct Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head->prev= newNode;
		head=newNode;
	}
}
void addLast(){
	struct Node* temp = head;
	struct Node* newNode = createNode();
	
	if(head == NULL){
		head = newNode;
	}else{
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

int addAtPos(int pos){
	int count = nodeCount();

	if(pos<1 || pos > count+1){
		printf("Invalid Input\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == count+1){
			addLast();
		}else{
			struct Node* temp = head;
			struct Node* newNode = createNode();

			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
		}
		return 0;
	}
}
void deleteFirst(){
	int count = nodeCount()

	if(head == NULL){
		printf("No Linked List Found:\n");
	}else if(count ==1){
		free(head);
		head = NULL;
	}else{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}
void deleteLast(){
	int count =nodeCount();

	if(head == NULL){
		printf("No Linked List Found:\n");
	}else if(count == 1){
		deleteFirst();
	}else{
		struct Node* temp = head ;
		while(temp->next->next != NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next = NULL;

	}
}

int deleteAtPos(int pos){
	
	int count = nodeCount();

	if(pos < 1 || pos > count ){
		printf("Invalid Position\n");
		return -1;
	}else{
		if(pos == 1)
			deleteFirst();
		else if(pos == count)
			deleteLast();
		else{
			struct Node* temp = head;

			while(pos -2){
				temp = temp->next;
				pos--;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}

	}
}

void printLL(){
	struct Node* temp = head;
	if(head == NULL){
		printf("Lined list is empty\n");
	}else{
	
		while(temp->next != NULL){
			printf("|%d|=>",temp->data);
			temp= temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}
int main(){
	int ch;

	while(1)
	{
		printf("\n1.Add NOde\n2.Add First\n3.Add Last\n4.Add At Position\n5.Delete First\n6.Delete Last\n7.Delete at Position\n8.Print Data\n9.count\n10.Exit\n");

		printf("\nEnter your choice\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				{
					int n;
					printf("\nHow many NOdes do you Want\n");
					scanf("%d",&n);
					for(int i=0; i<n; i++){
						addNode();
					}
					printLL();
				}
				break;
				
			case 2:
				addFirst();
				printLL();
				break;
				
				
			case 3:
				addLast();
				printLL();	
				break;

			case 4:
				{
					int pos;
					printf("Enter the Position:\n");
					scanf("%d",&pos);
					addAtPos(pos);	
					printLL();
				}
				
				break;
			case 5:
				deleteFirst();		
				printLL();
				break;
			case 6:
				deleteLast();
				printLL();
				break;

			case 7:
				{
					int pos;
					printf("Enter the Position:\n");
					scanf("%d",&pos);
					deleteAtPos(pos);
					printLL();
				}
				break;
			case 8:
				printLL();
				break;
			case 9:
				{
					int count = nodeCount();
					printf("count is %d\n",count);
				}
				break;
			case 10:
				return 0;
			default :
				printf("Wrong input\n");

		}
	
	}
}
