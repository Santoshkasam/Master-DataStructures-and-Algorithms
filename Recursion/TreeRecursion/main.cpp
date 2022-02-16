#include <iostream>
#include<stdio.h>
using namespace std;

/*
Since there are more than one recursive calls
in the function, it is said to have tree recursion
*/
void fun(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}


int main()
{
    int n=3;
    fun(3);
    return 0;
}
