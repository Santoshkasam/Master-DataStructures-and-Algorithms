#include <iostream>
#include <stdio.h>
using namespace std;

// Nested recursive function
int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main()
{
    int n = 95;
    cout << fun(n) << endl;
    return 0;
}
