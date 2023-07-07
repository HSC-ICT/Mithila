// calculate large Number between two number
#include <stdio.h>
int main()
{
    int num1, num2, result;

    printf("Enter two integer number : ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2){
        printf("%d is the largest number\n", num1);
    }else{
        printf("%d is the largest number\n", num2);
    }



    return 0;
}
