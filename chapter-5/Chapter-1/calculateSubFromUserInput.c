// sub of 2 integer number
#include <stdio.h>
int main(){
    // variable declarations
    int num1, num2, sub;
    printf("Enter 1st Integer Number: ");
    // take user input
    scanf("%d",&num1); // address of num1
    printf("Enter 2nd Integer Number: ");
    scanf("%d",&num2); // address of num2
    sub = num1 - num2;
    printf("The sub of the two integers is: %d \n",sub);
    return 0;
}