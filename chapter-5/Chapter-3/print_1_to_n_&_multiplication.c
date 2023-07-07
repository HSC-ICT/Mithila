// write a program that print 1 * 2 * 3 * 4 * ..... * n = ?
#include <stdio.h>
int main()
{
    long double i, n, product = 1;

    printf("Enter any integer number: ");
    scanf("%Lf",&n);

    for(i = 1; i <= n; i++){
        product *= i;
        if(i == 1){
            printf("1");
        }else{
            printf(" * %.0Lf",i);
        }
    }
    printf("\nMultiplication of 1 to %.0Lf is = %.0Lf\n", n, product);

    return 0;
}