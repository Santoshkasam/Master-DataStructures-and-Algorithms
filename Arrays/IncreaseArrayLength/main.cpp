#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p, *q;

    p = new int[5];
    p[0] = 9;
    p[1] = 3;
    p[2] = 12;
    p[3] = 7;
    p[4] = 4;

    // Creating a new int array of larger size
    q = new int[10];
    // Transferring elements from small array to larger array
    for(int i=0; i<5; i++){
        q[i] = p[i];
    }

    printf("Second element of p: %u\n", p[1]);
    printf("Address of p: %u\n", p);
    printf("Address of q: %u\n", q);

    // assigning the address of
    free(p);
    p=q;
    printf("Second element of p: %u\n", p[1]);
    q = NULL;

    printf("Address of p: %u\n", p);
    printf("Address of q: %u\n", q);

    delete []q;
    return 0;
}
