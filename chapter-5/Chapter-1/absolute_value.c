#include<stdio.h>
#include<math.h>

int main()
{
    int value, result;

    printf("Enter decimal value: ");
    scanf("%d", &value);

    result = abs(-value);

    printf("Absolute value is = %d\n", result);

    return 0;
}