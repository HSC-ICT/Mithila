#include<stdio.h>
int main()
{
    int num, count, product;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(count = 1; count <= 10; count++){
        product = num * count;
        printf("%d x %d = %d\n",num, count, product);
    }

    return 0;
}