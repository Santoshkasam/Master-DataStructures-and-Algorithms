#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

// This function creates an array in the heap and return the pointer to the array
int* dynamicArrayOfSize(int n){
    int *P;
    P = (int *)malloc(n*sizeof(int));
    return (P);
}

int main() {

    int *A;
    int n=10;
    A = dynamicArrayOfSize(n);

    // Insert numbers into the array
    for(int i = 0; i < n; i++){
        A[i] = i+1;
    }

    // Print the numbers in the array
    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}
