#include <stdio.h>
int main()
{

    int i;
    char ch;
    float f;

    printf("Enter int:");
    scanf("%d", &i);

    printf("Enter char:");
    scanf(" %c", &ch);

    printf("Enter f:");
    scanf("%f", &f);

    printf("%i", i);
    printf("%c", ch);
    printf("%f", f);

    return 0;
}