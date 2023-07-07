#include<stdio.h>
int main()
{
    for(int i = 2; i <= 100; i += 2){
        if(i == 52){
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}