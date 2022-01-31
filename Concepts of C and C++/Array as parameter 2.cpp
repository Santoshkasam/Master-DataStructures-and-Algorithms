#include<stdio.h>
#include<iostream>

using namespace std;

void func(int *A, int n){
    //for (a:A){ // this loop can be used only when the array is declared within the function
    for (int i = 0; i < n; i++){
        cout<<A[i]<<endl;
    }
}

int main() {
    int A[] = {2,4,6,8,10};
    int sizeOfArray = sizeof(A)/sizeof(int);
    func(A, sizeOfArray);
}
