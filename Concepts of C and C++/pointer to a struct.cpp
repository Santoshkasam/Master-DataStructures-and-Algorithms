#include<stdio.h>
#include<stdlib> // for memory allocation

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	// create a Rectangle pointer 
	Rectangle* P; // C code: struct Rectangle *P;

	// dynamic memory allocation
	P = new Rectangle; // C code: P = (struct Rectangle *) malloc(sizeof(struct Rectangle));

	P->length  = 10;
	P->breadth = 12;

	cout << P->length << endl;
	cout << P->breadth << endl;

	return 0;
}