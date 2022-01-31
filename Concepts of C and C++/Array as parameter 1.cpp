/*
* Trying to print the size of an array in a function.
*/

#include<stdio.h>
#include<iostream>
using namespace std;
void func(int A[]) {
	cout << sizeof(A) / sizeof(int) << endl;
	// Here since A is a pointer the array, sizeof(A) returns size of the
	// pointer, but not the array.

}

int main() {
	int A[] = {2,4,6,8,10};
	func(A); // The address of the array is passed.
             // Arrays cannot be passed by value.

    cout << sizeof(A)/sizeof(int) <<endl;
    // Here, A is the array and not a pointer. Hence the sizeof(A) returns the size
    // of the array.

	return 0;
}
