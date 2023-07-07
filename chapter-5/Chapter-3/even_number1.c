#include<stdio.h>
int main() {

    int i, num;
    printf("print all even number till: ");

    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    if(i % 2 == 0){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
