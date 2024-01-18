#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode{

	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

struct TreeNode* root = NULL;

struct TreeNode* createBST(struct TreeNode* root, int val){
	if(root == NULL){
		struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
		newNode->data = val;
		newNode->left = NULL;
		newNode->right = NULL;
		root=newNode;

		return root;
	}
	if(root->data > val){
		root->left = createBST(root->left, val);
	}else if(root->data < val){
		root->right = createBST(root->right, val);
	}
	return root;
}
bool searchInBST(struct TreeNode* root,int val){
	if(root == NULL){
		return false;
	}
	if(root->data ==val){
		return true;
	}
	if(root->data > val){
		searchInBST(root->left,val);
	}else if(root->data < val){
		searchInBST(root->right,val);
	}

	return false;

}
int maxInBST(struct TreeNode* root){
	if(root == NULL){\
		return -1;
	}
	struct TreeNode* temp = root;
        while(temp->right != NULL){
       		temp = temp->right;
        }	
	return temp->data;
}
int minInBST(struct TreeNode* root){
	if(root == NULL){\
		return -1;
	}
	struct TreeNode* temp = root;
        while(temp->left != NULL){
       		temp = temp->left;
        }	
	return temp->data;
}

void printBST(struct TreeNode* root){
	if(root == NULL){
		return;
	}
	printBST(root->left);
	printf("%d\n",root->data);
	printBST(root->right);
}

void main(){

	printf("Constructing Binary Search Tree\n");
	printf("No of Nodes ?\n");
	int num;
	scanf("%d",&num);
	printf("Enter value\n");
	int val;
	for(int i=0; i<num; i++){
		scanf("%d",&val);
		root = createBST(root,val);
	}
	printBST(root);
	bool ans = searchInBST(root,20);
	printf("%d\n",ans);
	int min = minInBST(root);
	printf("min = %d\n",min);

	int max = maxInBST(root);
	printf("max = %d\n",max);

}
