//27-12-22
//Linear Queue 
//Enque using priority.

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    int priority;
    struct Node* next;
}Node;
int num = 0;
int flag = 0;
Node* front = NULL; 
Node* rear = NULL; 

Node* createNode(){
    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL){
        printf("Memory Full\n");
        exit(0);
    }
    printf("Enter data\n");
    scanf("%d",&newNode->data);
    newNode->priority = -1;
    printf("Enter the priority\n");
    while(1 > newNode->priority || newNode->priority > 5)
    {	 
	    printf("Priority should be between 0 and 5\n");
	    scanf("%d",&newNode->priority);
    
    }
    newNode->next = NULL;
}

void enqueue(){

    Node* newNode = createNode();
    if(front == NULL){
        front = newNode;    
        rear = newNode;    
    }else if(front->next == NULL){
    
    	if(front->priority > newNode->priority){
		rear->next = newNode;
		rear = newNode;
	}else{
		newNode->next = front;
		front = newNode;
	}
    }
    else
    {
	    
	    Node *temp = front;
	    while(temp->next != NULL){
			    
		if(temp->priority >= newNode->priority && newNode->priority > temp->next->priority){
			newNode->next = temp->next;
			temp->next = newNode;
			num = 1;
		//	printf("1\n");
			break;
		}
		temp=temp->next;
	    }   
		if(num == 0){
			num == 1;
			if(front->priority < newNode->priority){
				newNode->next = front;
				front = newNode;
			}else{
       				rear->next = newNode;
        			rear = newNode;
			}
		}
    }
}

int dequeue(){
    if(front == NULL){
        flag = 0;
        return -1;
    }else{
        flag = 1;
        int val = front->data;
        if(front->next == NULL){
            free(front);
            front = NULL;
            rear = NULL;
        }else{
            Node* temp = front;
            front = front->next;
            free(temp);
        }
        return val;
    }
}

int frontt(){
    if(front == NULL){
        flag = 0;
        return -1;
    }else{
        flag = 1;
        int val= front->data;
        return val;
    }
}

int printQue(){
    if(front == NULL){
        flag = 0;
        return -1;
    }else{
        flag = 1;
        Node* temp = front;
        while(temp != NULL){
            printf("|%d|-> ",temp->data);
	    printf("|%d|",temp->priority);
	    printf("\n");
            temp=temp->next;
        }
	printf("\n");
        return 0;
    }
}

void main(){

    while(1){
        int ch;
        printf("1.Enqueue\n2.Dequeue\n3.front\n4.printf\n5.Exit\n\nSelect your choice\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:
                enqueue();
                break;
            case 2:
                {
                    int val = dequeue();
                    if(flag == 0){
                        printf("Queue is empty...\n");
                    }else{
                        printf("%d is dequeued\n",val);
                    }

                }
                break;
            case 3:
                {
                    int val = frontt();
                    if(flag == 0){
                        printf("Queue is empty...\n");
                    }else{
                        printf("%d \n",val);
                    }

                }
                break;
            case 4:
                {
                    int val = printQue();
                    if(flag == 0){
                        printf("Queue is empty...\n");
                    }  

                }
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Your choice is WRONG !!!\n");
        }
    }
}
