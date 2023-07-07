#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark >= 33){
        printf("You passed.\n");
    }else{
        printf("You failed.\n");
    }

    return 0;
}