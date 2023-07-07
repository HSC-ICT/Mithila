// Working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b); // true = 1
    printf("%d == %d is %d \n", a, c, a == c); // false = 0
    printf("%d > %d is %d \n", a, b, a > b); // false = 0
    printf("%d > %d is %d \n", a, c, a > c); // false = 0
    printf("%d < %d is %d \n", a, b, a < b); // false = 0
    printf("%d < %d is %d \n", a, c, a < c); // true = 1
    printf("%d != %d is %d \n", a, b, a != b); // false = 0
    printf("%d != %d is %d \n", a, c, a != c); // true = 1
    printf("%d >= %d is %d \n", a, b, a >= b); // true = 1
    printf("%d >= %d is %d \n", a, c, a >= c); // false = 0
    printf("%d <= %d is %d \n", a, b, a <= b); // true = 1
    printf("%d <= %d is %d \n", a, c, a <= c); // true = 1

    return 0;
}
