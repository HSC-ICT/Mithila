#include<stdio.h>
#include<math.h>
int main()
{
    double x = 5.34;
    double y = 5.55;
    double z = 0.5456464638;
    double c = 3.5;
    double f = -1.5;
    double result_x = round(x);
    double result_y = round(y);
    double result_z = trunc(z);
    double result_c = ceil(c);
    double result_f = floor(f);

    printf("Math round(%.2lf) = %.2lf\n",x,result_x);
    printf("Math round(%.2lf) = %.2lf\n",y,result_y);
    printf("Math trunc(%.2lf) = %.2lf\n",z,result_z);
    printf("Math ceil(%.2lf) = %.2lf\n",c,result_c);
    printf("Math floor(%.2lf) = %.2lf\n",f,result_f);
    /*
        Math round(5.34) = 5.00
        Math round(5.55) = 6.00
        Math trunc(0.55) = 0.00
        Math ceil(3.20) = 4.00
        Math floor(3.20) = 3.00
    */
    return 0;
}