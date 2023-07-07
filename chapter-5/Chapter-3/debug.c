#include<cs50.h>
#include<stdio.h>
int main()
{
    string my_name = get_string("What's your name: ");

    for(int i = 0; i < 10; i++)
    {
        printf("Hi, %s\n", my_name);
    }

    return 0;
}
