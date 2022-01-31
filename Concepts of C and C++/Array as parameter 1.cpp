/*
* Trying to print the size of an array in a function.
*/

#include<stdio.h>
#include<iostream>
using namespace std;
void func(int A[]) {
	cout << sizeof(A) / sizeof(int) << endl;

}

int main() {
	int A[] = {2,4,6,8,10};
	func(A);

	return 0;
}
