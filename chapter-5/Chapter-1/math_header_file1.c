
#include<stdio.h>
#include<math.h>
int main()
{
    double x = 10.5, y = 1, z = 1;
    double s = 0.35, c = 3.23, t = 1.78;

    double logx = log(x);
    double logy = log10(y);
    double expz = exp(z);

    double sintheta = sin(s);
    double costheta = cos(c);
    double tantheta = tan(t);

    printf("log(%.2lf) = %.4lf\n",x,logx); // log(10.50) = 2.3514
    printf("log10(%.2lf) = %.4lf\n",y,logy); // log10(1.00) = 0.0000
    printf("Exponential(%.2lf) = %.4lf\n",y,expz); // Exponential(1.00) = 2.7183
    printf("Sin(%.2lf) = %.4lf\n",s,sintheta); // Sin(0.35) = 0.3429
    printf("Cos(%.2lf) = %.4lf\n",c,costheta); // Cos(3.23) = -0.9961
    printf("Tan(%.2lf) = %.4lf\n",t,tantheta); // Tan(1.78) = -4.7101

    return 0;
}

// log(10.50) = 2.3514
// log10(1.00) = 0.0000
// Exponential(1.00) = 2.7183
// Sin(0.35) = 0.3429
// Cos(3.23) = -0.0883
// Tan(1.78) = 0.9782