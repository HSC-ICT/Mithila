#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double value, result;

    // printf("Enter Decimal value: ");
    // scanf("%lf", &value);

    // result = sqrt(value);

    // printf("Square Root is = %.2lf\n", result);



    cout << "Enter Decimal value: ";
    cin >> value;

    result = sqrt(value);

    cout << "Square Root is = " << result << "\n";

    return 0;
}