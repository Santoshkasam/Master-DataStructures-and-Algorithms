#include <iostream>
#include<stdio.h>

using namespace std;

/* Defining funB prototype because it is called in funA
    before its definition
*/
void funB(int n);

void funA(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        funB(n-1);
    }
}

void funB(int n)
{
    if(n>1)
    {
        printf("%d\n",n);
        funA(n/2);
    }
}

int main()
{
    int n=20;
    funA(20);
    return 0;
}
