#include <iostream>
#include "afterSecondTerm.h"
using namespace std;

int main()
{
    Student a("qwerty", 4, 3, 1);
    SecondStudent b("zxcvb", 2, 4, 1, 9, 10, 3, 5);
    ThirdStudent c("asdfg", 5, 4, 7, 9, 10, 7, 5, 10);
    cout << a << b << c;
}



