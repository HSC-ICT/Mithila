// Working of increment and decrement operators

/*
    ++a, a = a + 1,  a += 1
    a++, a = a + 1, a += 1

    --a, a = a - 1, a -= 1
    a--, a = a - 1, a -= 1
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    // float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);  // 11
    printf("++a = %d \n", ++a);  // 12

    printf("a++ = %d \n", a++);  // 12
    printf("a++ = %d \n", a++);  // 13


    printf("--b = %d \n", --b); // 99
    printf("--b = %d \n", --b); // 98

    printf("b-- = %d \n", b--); // 98
    printf("b--= %d \n", b--); // 97

    return 0;
}
