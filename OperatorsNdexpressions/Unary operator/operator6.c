#include<stdio.h>
int x = 5;
int ans;
void main()
{
	
	
	ans = ++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);

}

// output

// in main
// 11
// 32
// end main