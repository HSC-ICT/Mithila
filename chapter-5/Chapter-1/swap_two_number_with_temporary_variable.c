#include<stdio.h>
int main()
{
    /*
        a = green
        b = red

        a = red
        b = green

        num1 = 3
        num2 = 5

        temp = num1 ==> temp = 3
        num1 = num2 ==> num1 = 5
        num2 = temp ==> num2 = 3
    */
   int num1, num2, temp;

   printf("Enter 2 integer number : ");
   scanf("%d%d", &num1, &num2);

   printf("num1 = %d and num2 = %d\n", num1, num2);

   temp = num1;
   num1 = num2;
   num2 = temp;

   printf("num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}
