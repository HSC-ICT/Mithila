#include<stdio.h>
int main() {

    int i, num;
    printf("print all even number till: ");

    scanf("%d", &num);

    for(i = 2; i <= num; i += 2){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
