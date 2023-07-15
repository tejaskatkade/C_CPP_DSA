// count nodes

#include<stdio.h>
#include<stdlib.h>

struct TreeNode{

	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};

int count = 0;
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
int countNode(struct TreeNode* root){
	
	if(root == NULL){
		return 0;
	}
	count = count + 1;
 	countNode(root->left) ;
       	countNode(root->right);

	return count;
}
void printTree(struct TreeNode *root){
	char ch;

	do{
		printf("1. Preorder\n");
		printf("2. Postorder\n");
		printf("3. Inorder\n");
		printf("4. countNode\n");
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
			case 4:
				printf(" %d\n",countNode(root));
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
