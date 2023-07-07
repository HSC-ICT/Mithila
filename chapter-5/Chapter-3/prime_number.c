#include<stdio.h>
int main()
{
    int i, n;

    printf("Please enter an integer number(limit): ");
    scanf("%d", &n);

    for(i = 2; i < n; i++){
        if((i < 10) && (i == 2 || i == 3 || i == 5 || i == 7))
        {
            printf(" %d ", i);
        }
        else if(!(i % 2 && i % 3 && i % 5 && i % 7))
        {
            continue;
        }
        else{
            printf(" %d ", i);
        }
    }
    printf("\n");

    return 0;
}