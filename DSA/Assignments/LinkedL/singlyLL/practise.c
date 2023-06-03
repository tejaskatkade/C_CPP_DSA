#include <stdio.h>

int mystrlen(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

int nodeCount()
{
    struct Node *temp = head;

    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // printf("count = %d\n",count);
    return count;
}
