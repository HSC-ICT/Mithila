#include<stdio.h>
int main(){
    int a,b,c,d,e;

    a = 5;
    b = 3;
    c = 2;
    d = 50;
    e = 23;
    
    a += 2; // a = a + 2 = 7
    b -= 2; // b = b - 2 = 1
    c *= 2; // c = c * 2 = 4
    d /= 2; // d = d / 2 = 25
    e %= 2; // e = e % 2 = 1

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("D = %d\n", d);
    printf("E = %d\n", e);

    return 0;
}

// a+=1      a = a + 1      a++
// a+=2      a = a + 2