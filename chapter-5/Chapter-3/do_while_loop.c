#include<stdio.h>
int main()
{
    int i = 1, n = 100;

    do{
        printf("%d\n", i);
        i += 1;
    }while(i <= n);

    return 0;
}