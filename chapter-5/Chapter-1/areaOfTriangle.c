#include<stdio.h>
int main(){
    // variable declaration
    float base, height, area;

    // print & scan part
    // printf("Please enter base:  ");
    // scanf("%f", &base);

    // printf("Please enter height:  ");
    // scanf("%f", &height);

    printf("Please Enter base and height: ");
    scanf("%f%f", &base, &height);

    // calculation part
    // area = 1 / 2 * base * height;
    area = .5 * base * height;

    // output part
    printf("Area of Triangle is :  %.2f \n", area);

    return 0;
}


// dry method --> don't repeat yourself
