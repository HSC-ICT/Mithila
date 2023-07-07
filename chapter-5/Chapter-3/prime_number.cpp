#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, n;
    cout << "Please enter an integer number(limit): ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        if((i < 10) && (i == 2 || i == 3 || i == 5 || i == 7))
        {
            cout << i << endl;
        }
        else if(!(i % 2 && i % 3 && i % 5 && i % 7))
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}