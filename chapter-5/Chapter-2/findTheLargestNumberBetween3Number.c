#include<stdio.h>
main(){

    int num1, num2, num3;

    printf("Enter 3 integer number: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if((num1 > num2) && (num1 > num3)){ //  true && true => true => num1
        printf("%d is the largest number\n", num1);
    }else if((num2 > num1) && (num2 > num3)){ // true && true => true => num2
        printf("%d is the largest number\n", num2);
    }else{ // otherwise
        printf("%d is the largest number\n", num3);
    }

    return 0;
}


2  3  5
1)
    2 > 3 => false && 2 > 5 => false // number1 is not the largest number
    2)
        3 > 2 => true && 3 > 5 => false // number2 is not the largest number
3)
    // number3 is the largest number


2 5 3
1)
    2 > 5 => false && 2 > 3 => false // number1 is not the largest number
    2)
        5 > 2 => true && 5 > 3 => true // // number2 is the largest number
