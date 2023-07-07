// write a program that print 1.5 + 2.5 + 3.5 + 4.5 + ..... + n = ?

#include <stdio.h>
int main()
{
    float i, n, sum = 0;

    printf("Enter any integer number: ");
    scanf("%f", &n);

    for(i = 1.5; i <= n; i++){
        if(i == 1.5){
            printf("1.5");
        }else{
            printf(" + %.1f", i);
        }
        sum += i;
    }
    printf("\nSum of 1.5 to %.1f is = %.1f\n", n, sum);
    return 0;
}