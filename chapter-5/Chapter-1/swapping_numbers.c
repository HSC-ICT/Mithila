#include<stdio.h>
int main()
{
    int mithila, fariba, bank;

    printf("Mithila, Enter your amount: ");
    scanf("%d", &mithila);

    printf("Fariba, Enter your amount: ");
    scanf("%d", &fariba);

    printf("Mithila has %dtk and Fariba has %dtk\n", mithila, fariba);

    bank = mithila;
    mithila = fariba;
    fariba = bank;

    printf("Mithila has %dtk and Fariba has %dtk\n", mithila, fariba);

    return 0;
}