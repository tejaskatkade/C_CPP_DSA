#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main()
{
	int i,j,n;
	int p,q,temp,x;
	printf("Enter array size:");
	scanf("%d",&n);

	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d :\n",i);
		scanf("%d",&arr[i]);
	}	
	

	
	int pid;
	printf(" main Process\n ");
	pid=fork();

	if(pid==0)
	{
		
		printf(" child's PID %d\n",getpid());
		printf(" child's parent %d\n",getppid());
		for(p=0;p<n;p++)
		{
		for(q=p+1;q<n;q++)
		{
			if(arr[p]>arr[q])
			{
				temp=arr[p];
				arr[p]=arr[q];
				arr[q]=temp;
			}
		}
	}
	for(x=0;x<n;x++)
	{
		printf("%d\n",arr[x]);
		}		
	}

	else if(pid>0)
	{
		sleep(5);
		printf(" parent's PID %d\n",getpid());
		printf(" Grandparent's PID %d\n",getppid());
		for(p=0;p<n;p++)
	{
		for(q=p+1;q<n;q++)
		{
			if(arr[p]<arr[q])
			{
				temp=arr[p];
				arr[p]=arr[q];
				arr[q]=temp;
			}
		}
	}
	for(x=0;x<n;x++)
	{
		printf("%d\n",arr[x]);
		}

	}
	
	

	else
	{
		printf(" Error on fork ");
	}
	
	return 0;
}

