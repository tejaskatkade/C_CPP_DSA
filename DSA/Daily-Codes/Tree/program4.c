// Size of Binary tree
// sum of Binary tree

// Height of Binary tree

#include<stdio.h>
#include<stdlib.h>

struct TreeNode{

	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};

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
int sizeOfBT(struct TreeNode* root){
	
	if(root == NULL){
		return 0;
	}
	
 	int leftSize = sizeOfBT(root->left) ;
       	int rightSize = sizeOfBT(root->right);

	return leftSize + rightSize + 1;
}

int sumOfBT(struct TreeNode* root){

	if(root == NULL){
	
		return 0;
	}

	int leftSum = sumOfBT(root->left);
	int rightSum = sumOfBT(root->right);

	return leftSum + rightSum + root->data;
}
int max(int l, int r){

	if(l > r){
		return l;
	}else{
	
		return r;
	}
}
int heightOfBT(struct TreeNode* root){

	if(root == NULL){
	
		return -1;
	}

	int leftHeight = heightOfBT(root->left);
	int rightHeight = heightOfBT(root->right);

	return max(leftHeight, rightHeight) + 1;
}
void printTree(struct TreeNode *root){
	char ch;

	do{
		printf("1. Preorder\n");
		printf("2. Postorder\n");
		printf("3. Inorder\n");
		printf("4. Size of Binary Tree\n");
		printf("5. Sum of Binary Tree\n");
		printf("6. Height of Binary Tree\n");

		int choice;
		printf("Enter choice\n");
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
			case 4:
				printf(" %d\n",sizeOfBT(root));
				break;
			case 5:
				printf(" %d\n",sumOfBT(root));
				break;
			case 6:
				printf(" %d\n",heightOfBT(root));
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
