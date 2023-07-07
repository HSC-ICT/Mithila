// sizeof() different data types
#include <stdio.h>
int main(){
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of integer type = %d byte\n", sizeof(integerType));
    printf("Size of float type = %d byte\n", sizeof(floatType));
    printf("Size of double type = %d byte\n", sizeof(doubleType));
    printf("Size of character type = %d byte\n", sizeof(charType));

    return 0;
}
