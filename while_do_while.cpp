#include <iostream>
#include <cmath>
using namespace std;

int main()
{

#ifndef new_IO

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    while (num > 0)
    {
        int x = (pow(num, 2));
        cout << x << endl;
        num--;
    }
    return 0;
}