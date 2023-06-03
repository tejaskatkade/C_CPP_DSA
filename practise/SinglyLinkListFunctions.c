// SINGLTY LINK LIST

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct RelayRace
{
	char PlayerName[100];
	int PlayerNumber;
	float PlayerSpeed;
	struct RelayRace* Next;
}RR;
RR* Head=NULL;
RR* CreateNode();
void AddFirst();
void AddLast();
void AddAtPosition(int x);
void DeleteFirst();
void DeleteLast();
void DeleteAtPosition(int x);
void PrintNode();
int CountNode();
void main()
{
	int req,ch;
	char c='y';
	do
	{	
		printf("Choose option :\n");
		printf("1. AddFirst\n");
		printf("2. AddLast\n");
		printf("3. AddAtPosition\n");
		printf("4. DeleteFirst\n");
		printf("5. DeleteLast\n");
		printf("6. DeleteAtPosition\n");
		printf("7. PrintNode\n");
		printf("8. CountNode\n");
		printf("Enter choice : ");
		scanf("%d",&ch);
		if(ch==1)
			AddFirst();
		else if(ch==2)
			AddLast();
		else if(ch==3)
		{
			int ins;
			printf("Enter position to insert : ");
			scanf("%d",&ins);
			AddAtPosition(ins);
		}
		else if(ch==4)
			DeleteFirst();
		else if(ch==5)
			DeleteLast();
		else if(ch==6)
		{
			int ins;
			printf("Enter position to delete : ");
			scanf("%d",&ins);
			DeleteAtPosition(ins);
		}
		else if(ch==7)
			PrintNode();
		else if(ch==8)
			printf("Total nodes : %d\n",CountNode());
		else
			printf("Invalid choice.\n");
		getchar();
		printf("Do you want to continue (Y/N) : ");
		scanf("%c",&c);
	}while(c=='y' || ch=='Y');
}

// CREATING-NEW-NODE
RR* CreateNode()
{
	getchar();
	RR* NewNode=(RR*)malloc(sizeof(RR));
	printf("Enter Player's name : ");
	int i=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		NewNode->PlayerName[i]=ch;
		i++;
	}
	printf("Enter player's number : ");
	scanf("%d",&NewNode->PlayerNumber);
	printf("Enter player's speed in m/s : ");
	scanf("%f",&NewNode->PlayerSpeed);
	NewNode->Next=NULL;
	return NewNode;
}

//ADD-NEW-NODE-AT-STARTING
void AddFirst()
{
	RR* NewNode=CreateNode();
	if(Head==NULL)
		Head=NewNode;
	else
	{
		NewNode->Next=Head;
		Head=NewNode;
	}
}

//ADD-NEW-NODE-AT-LAST
void AddLast()
{
	RR* NewNode=CreateNode();
	if(Head==NULL)
		Head=NewNode;
	else
	{
		RR* temp=Head;
		while(temp->Next!=NULL)
			temp=temp->Next;
		temp->Next=NewNode;
	}
}

//ADD-NEW-NODE-AT-SPECIFIC
void AddAtPosition(int x)
{
	int count=CountNode();
	if(x<1 || x>count+1)
		printf("Invalid position to insert node.\n");
	else if(x==1)
		AddFirst();
	else if(x==count+1)
		AddLast();
	else
	{
		RR* NewNode=CreateNode();
		RR* temp=Head;
		while(x-2)
		{
			temp=temp->Next;
			x--;
		}
		NewNode->Next=temp->Next;
		temp->Next=NewNode;
	}
}

//DELETE-FIRST-NODE
void DeleteFirst()
{
	if(Head==NULL)
		printf("No linked list found.\n");
	else
	{
		RR* temp=Head;
		Head=temp->Next;
		free(temp);
	}
}

//DELETE-LAST-NODE
void DeleteLast()
{	
	int count=CountNode();
	if(Head==NULL)
		printf("No linked list found.\n");
	else if(count==1)
		DeleteFirst();
	else if(count==2)
	{
		free(Head->Next);
		Head->Next=NULL;
	}
	else
	{
		RR* temp=Head;
		while(temp->Next->Next!=NULL)
			temp=temp->Next;
		RR* Delete=temp->Next;
		temp->Next=NULL;
		free(Delete);
	}
}

//DELETE-NODE-SPECIFIC-POSITION
void DeleteAtPosition(int x)
{
	int count=CountNode();
	if(x<1 || x>count)
		printf("Invalid position to delete node.\n");
	else if(x==1)
		DeleteFirst();
	else if(x==count)
		DeleteLast();
	else
	{
		RR* temp=Head;
		while(x-2)
		{
			temp=temp->Next;
			x--;
		}
		RR* Delete=temp->Next;
		temp->Next=temp->Next->Next;
		free(Delete);
	}
}

//PRINT-LINKED-LIST
void PrintNode()
{
	if(Head==NULL)
		printf("Linked List is empty.");
	else
	{
		RR* temp=Head;
		while(temp->Next!=NULL)
		{
			printf("|%s|",temp->PlayerName);
			printf("%d|",temp->PlayerNumber);
			printf("%f|->",temp->PlayerSpeed);
			temp=temp->Next;
		}
		printf("|%s|",temp->PlayerName);
		printf("%d|",temp->PlayerNumber);
		printf("%f|",temp->PlayerSpeed);
	}
	printf("\n");
}

//COUNT-TOTAL-NODES
int CountNode()
{
	int count=0;
	if(Head==NULL)
		return 0;
	else
	{
		RR* temp=Head;
		while(temp!=NULL)
		{
			count++;
			temp=temp->Next;
		}
	}
	return count;
}