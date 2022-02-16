#include <iostream>
#include <stdio.h>

using namespace std;

int fun(int n){

    //static variable is initialized only once
    static int x=0;

    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    printf("%d\n", fun(a));

    printf("%d\n", fun(a));

    return 0;
}
