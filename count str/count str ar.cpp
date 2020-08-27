#include<stdio.h>
int main()
{
    char input[100];
    int i, count = 0;

    printf("Enter your message : ");
    scanf_s("%s", input);

    for (i = 0; input[i] != '\0'; i++) count++;

    printf("count = %d\n", count);
    return 0;
}