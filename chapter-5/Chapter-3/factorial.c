#include<stdio.h>

int main()
{
    int n, fact = 1;

    printf("Enter any positive number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("%d\n", fact);

    return 0;
}

// i = 1 , fact = 1 * 1 = 1
// i = 2 , fact = 1 * 2 = 2
// i = 3 , fact = 2 * 3 = 6
// i = 4 , fact = 6 * 4 = 24
// i = 5 , fact = 24 * 5 = 120
