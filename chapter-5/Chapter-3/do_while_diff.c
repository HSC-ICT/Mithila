#include<stdio.h>
int main()
{
    int i = 0;

    do{
        printf("%d while vs do-while loop\n", i);
        i++;
    }while(i == 10);

    printf("Out of loop\n");

    return 0;
}