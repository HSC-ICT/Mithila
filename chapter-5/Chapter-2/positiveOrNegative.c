// amader user 1 ta number input dibe.
// amader kaj hosse user er dewa number ta positive naki negative seta jante hobe.
#include<stdio.h>
main(){

    int num;

    printf("Please enter a interger number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is a positive number.\n", num);
    }else if(num < 0){
        printf("%d is a negative number.\n", num);
    }else{
        printf("%d is 0\n",num);
    }

    if(num > 0){
        printf("%d is a positive number.\n", num);
    }else if(num = 0){
        printf("%d is Zero\n", num);
    }else{
        printf("%d is a negative number.\n", num);
    }

    return 0;
}



