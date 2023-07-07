#include<stdio.h>
#include<math.h>

int main(){
    double base, exponent, result;

    printf("Enter base and exponent: ");
    scanf("%lf%lf", &base, &exponent);

    result = pow(base, exponent);

    printf("%.0lf^%.0lf = %.0lf\n",base, exponent, result);
}