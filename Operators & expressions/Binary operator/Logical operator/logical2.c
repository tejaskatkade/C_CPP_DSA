#include <stdio.h>

void main()
{
    int x = 8;
    int y = 11;
    int ans;

    ans = ++x || ++y;

    printf("%d\n",ans);
    printf("%d\n",x);
    printf("%d\n",y);

    ans = ++x && ++y;

    printf("%d\n",ans);
    printf("%d\n",x);
    printf("%d\n",y);


}


// output
// 1
// 9
// 11
// 1
// 10
// 12