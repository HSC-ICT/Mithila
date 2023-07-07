#include<stdio.h>
int main(){

    double radius, area;
    const  double PI = 3.1416;

    printf("Enter radius of the circle : ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area of the circle is : %.2lf", area);

    return 0;
}
