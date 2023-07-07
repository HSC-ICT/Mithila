#include <stdio.h>
int main()
{
    int n;

    printf("Enter an hexadecimal number: ");
    scanf("%x", &n);

    printf("Octal value: %o\n", n);

    return 0;
}