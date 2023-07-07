#include<stdio.h>
int main()
{
    int i = 0;
    
    while (i <= 10) {
        printf("%d while vs do-while loop\n", i);
        i++;
    }

    printf("Out of loop\n");

    return 0;
}