#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack a(1);
    a.push(6);
    a.push(2);
    a.push(3);

    Stack b(2);
    b << 1;
    b << 3;

    a = b;
    a.displayStack();
    if (a > b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cout << a[2];
}