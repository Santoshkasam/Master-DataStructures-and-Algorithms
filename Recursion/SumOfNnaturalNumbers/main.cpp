#include <iostream>

using namespace std;

int sumofn(int n)
{
    if(n == 1)
        return 1;
    else
        return n+sumofn(n-1);
}

/*int sumofn(int n)
{
    if(n>0)
        return n + sumofn(n-1);
    else
        return 0;
}*/

int main()
{
    int r = 10;
    cout <<  sumofn(r) << endl;
    return 0;
}
