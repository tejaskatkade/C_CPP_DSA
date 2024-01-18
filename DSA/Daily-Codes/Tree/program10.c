// creating BT from in and pre order
//


#include<stdio.h>
#include<stdlib.h>

struct TreeNode{

	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};
struct TreeNode* addNode(){
	struct TreeNode *newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));	
	return newNode;
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

void printTree(struct TreeNode *root){
	char ch;

	do{
		printf("1. Preorder\n");
		printf("2. Postorder\n");
		printf("3. Inorder\n");

		int choice;
		printf("Enter choic\n");
		scanf("%d",&choice);

		switch(choice){
		
			case 1:
				preOrder(root);
				break;
			case 2:
				postOrder(root);
				break;
			case 3:
				inOrder(root);
				break;
		}
		getchar();
		printf("\nDo you want to continue ?\n");
		scanf("%c",&ch);
	
	}while(ch == 'y' || ch == 'Y');

}

void createRight(struct TreeNode* root, int in[], int pre[],int start, int size);
void createLeft(struct TreeNode* root, int in[], int pre[],int start, int size);

void createLeft(struct TreeNode* root, int in[], int pre[], int start, int size){
	int index;

	for(int i=start; i<size; i++ ){
		if(pre[0]  == in[i]){
			index = i;
			break;
		}
	}
	struct TreeNode* newNode = addNode();
	root->left = newNode;
	newNode->data = pre[0];

	if(index > 0){
		createLeft(newNode->left,in,pre,index-1);
	}
	if(index < size){
		createRight(newNode->right,in,pre,index+1,size);
	}
}
void createRight(struct TreeNode* root, int in[], int pre[],int start, int size){
	int index;
	for(int i=start; i<size; i++ ){
		if(pre[start]  == in[i]){
			index = i;
			break;
		}
	}
	struct TreeNode* newNode = addNode();
	root->right = newNode;
	newNode->data = in[index];

	if(index > 0){
		createLeft(newNode->left,in,pre,index-1);
	}
	if(index < size){
		createRight(newNode->right,in,pre,index+1,size);
	}
}
void createTree(int in[], int pre[], int size){
	int index;
	printf("\t Creating Binary Tree\n");
	
	struct TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	
	for(int i=0; i<size; i++){
	
		if(pre[0] == in[i]){
			index = i;
			break;
		}
	}
	

	printf("Tree rooted with %d\n",in[i]);
	root->data = in[index];
	if(index > 0){
		createLeft(root,in,pre,index-1);
	}
	if(index < size){
		createRight(root,in,pre,index+1,size);
	}
	printTree(root);
}

void create(){

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

void main(){

	int val;
	printf("1.createTree\n");
	printf("2.create\n");
	scanf("%d",&val);

	if(val == 1){
		int in[]= {2,5,4,1,6,3,8,7};
		int pre[]={1,2,4,5,3,6,7,8};

		createTree(in,pre,8);
	}else{
		create();
	}
}
