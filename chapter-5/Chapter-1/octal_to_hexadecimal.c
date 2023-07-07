#include<stdio.h>
int main()
{
    int n;

    printf("Enter an octal number: ");
    scanf("%o", &n);

    printf("Hexadecimal value: %x\n", n);

    return 0;
}