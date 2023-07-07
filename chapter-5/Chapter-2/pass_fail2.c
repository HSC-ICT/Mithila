#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark >= 33 && mark <= 100){
        printf("You passed.\n");
    }else if(mark >= 0 && mark <= 32){
        printf("You failed.\n");
    }else{
        printf("Invalid marks.\n");
    }

    return 0;
}