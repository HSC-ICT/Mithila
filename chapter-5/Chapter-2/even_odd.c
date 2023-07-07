// Conditional Control Statement if-else
#include<stdio.h>
int main()
{
    // Control statement = conditional control statement, loop control statement

    int num;
    
    printf("Enter an integer number : ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }

    return 0;
}