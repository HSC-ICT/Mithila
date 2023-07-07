#include<stdio.h>
int main()
{
    for(int i = 1; i <= 20; i += 2){
        if(i == 3 || i == 11 || i == 17){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}