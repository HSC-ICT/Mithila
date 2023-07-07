#include<stdio.h>
main(){

    int num1, num2;

    printf("Please enter two interger number: ");
    scanf("%d%d", &num1, &num2);

    if(num1 < num2){
        printf("%d is the smallest number\n", num1);
    }else{
        printf("%d is the smallest number\n", num2);
    }

    return 0;
}


