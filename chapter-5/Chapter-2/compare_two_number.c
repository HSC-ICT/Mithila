#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("Larger Number = %d\n",num1);
    }else if(num1 < num2){
        printf("Larger Number = %d\n",num2);
    }else{
        printf("Numbers are equal\n");
    }

    return 0;
}