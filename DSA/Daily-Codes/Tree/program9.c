/*
 *
 *author name : Tejas Katkade
 *module : 
 *Description :
 *Num of Function : 
 *
 * */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode{

	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct Queue{

	struct TreeNode* btNode;
	struct Queue* next;
};
struct Queue* top = NULL;

struct Queue* front = NULL;
struct Queue* rear = NULL;

bool isNULL(){

	if(front == NULL && rear == NULL)
		return true;
	else
		return false;
}

void enqueue(struct TreeNode *temp){

	struct Queue *newNode = (struct Queue*)malloc(sizeof(struct Queue));
	newNode->btNode = temp;
	newNode->next = NULL;

	if(isNULL()){
		front = rear = newNode;
	}else{
		rear->next = newNode;
		rear = newNode;
	}
}

struct TreeNode* dequeue(){

	if(isNULL()){
	
		printf("Tree Queue is Empty\n");
	}else{
	
		struct Queue *temp = front;
		struct TreeNode *item = temp->btNode;

		if(front == rear){
		
			front = rear = NULL;
		}else{
		
			front = front->next;
		}
		free(temp);
		return item;
	}
}

void levelOrder(struct TreeNode* root){
	
	struct TreeNode *temp = root;
	enqueue(root);
	while(!isNULL()){
		temp = dequeue();
		printf(" %d ",temp->data);

		if(temp->left != NULL){
			enqueue(temp->left);
		}
		if(temp->right != NULL){
			enqueue(temp->right);
		}
	}
}
void push(struct TreeNode* temp){
	struct Queue* newNode = (struct Queue *)malloc(sizeof(struct Queue));
	newNode->btNode = temp;
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
struct TreeNode* pop(){

	if(isEmpty()){
	
		printf("Tree Stack is Empty\n");
	}else{
		struct Queue *temp = top;
		struct TreeNode * item = temp->btNode;
		top = top->next;
		free(temp);
		return item;
	} 
}

struct TreeNode* createNode(int level){

	level = level + 1;
	struct TreeNode *newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

	printf("Enter data\n");
	scanf("%d",&newNode->data);
	
        char ch;
        getchar();
        printf("Want to create left subtree for level %d?\n",level);
        scanf("%c",&ch);

        if(ch == 'y' || ch == 'Y'){

                newNode->left = createNode(level);
        }else{
                newNode->left = NULL;
        }

        getchar();
        printf("Want to create right subtree for level %d?\n",level);
        scanf("%c",&ch);

        if(ch == 'y' || ch == 'Y'){

                newNode->right = createNode(level);
        }else{
                newNode->right = NULL;
        }

	return newNode;
}

void preOrder(struct TreeNode* root){
	if(root == NULL)
		return;

	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(struct TreeNode* root){
	if(root == NULL)
		return;

	inOrder(root->left);
	printf(" %d ",root->data);
	inOrder(root->right);
}
void postOrder(struct TreeNode* root){
	if(root == NULL)
		return;

	postOrder(root->left);
	postOrder(root->right);
	printf(" %d ",root->data);
}
void iterativeInOrder(struct TreeNode* root){
	struct TreeNode* temp = root;
	if(temp == NULL){
	
		printf("Tree Empty\n");

	}else{
		while(temp != NULL || (!isEmpty())){
		
			if(temp != NULL){
			
				push(temp);
				temp = temp->left;
			}else{
			
				temp = pop();
				printf("%d ",temp->data);
				temp = temp->right;
			}	
		}
	}
	
}

void printTree(struct TreeNode *root){
	char ch;
	do{
		printf("1. Preorder\n");
		printf("2. Inorder\n");
		printf("3. Postorder\n");
		printf("4. Iterative Inorder\n");
		printf("5. Level Order\n");


		int choice;
		printf("Enter choic\n");
		scanf("%d",&choice);

		switch(choice){
		
			case 1:
				preOrder(root);
				break;
			case 2:
				inOrder(root);
				break;
			case 3:
				postOrder(root);
				break;
			case 4:
				iterativeInOrder(root);
				break;
			case 5:
				levelOrder(root);
				break;
		}
		getchar();
		printf("\nDo you want to continue ?\n");
		scanf("%c",&ch);
	
	}while(ch == 'y' || ch == 'Y');

}
void main(){

	printf("\t Creating Binary Tree\n");
	
	struct TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	
	printf("Enter data\n");
	scanf("%d",&root->data);
	printf("\tTree rooted with %d\n ",root->data);

	char ch;
	getchar();
	printf("Want to create left subtree for root node?\n");
	scanf("%c",&ch);

	if(ch == 'y' || ch == 'Y'){
	
		root->left = createNode(0);
	}else{
		root->left = NULL;
	}

	getchar();
        printf("Want to create right subtree for root node?\n");
	scanf("%c",&ch);

        if(ch == 'y' || ch == 'Y'){

                root->right = createNode(0);
        }else{
                root->right = NULL;
        }

	printTree(root);
}
