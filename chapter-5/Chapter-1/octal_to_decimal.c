#include <stdio.h>
int main()
{
    int n;

    printf("Enter an octal number: ");
    scanf("%o", &n);

    printf("Decimal value = %d\n",n);

    return 0;
}