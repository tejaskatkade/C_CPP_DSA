#include<stdio.h>
int x = 10;

void fun()
{
	int y = 20;
	int ans;
	ans = x++ + y++;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",ans);

}
void main()
{
	printf("in main\n");
	fun();
	printf("end main");
   


}

// output

// in main
// 11
// 21
// 30
// end main