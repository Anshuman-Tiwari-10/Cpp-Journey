#include <iostream>
using namespace std;

int main()
{

#ifndef op_worker

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int num1, num2, num3;
    cout << "Enter 3 numbers" << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "The greatest number is:\n"
                 << num1 << endl;
        }
        else
        {
            cout << "The greatest number is \n"
                 << num3 << endl;
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout << "The greatest number is\n"
                 << num2 << endl;
        }
        else
        {
            cout << "The greatest number is\n"
                 << num3 << endl;
        }
    }
    else
    {
        cout << "Invalid condition" << endl;
    }
}