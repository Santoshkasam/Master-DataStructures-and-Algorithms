#include <iostream>
#include <stdio.h>

using namespace std;

struct array
{
    int arr[20];
    int size;
    int length;
};

void Display(struct array &a)
{
    for(int i=0; i<a.length; i++)
    {
        printf("%d\n",a.arr[i]);
    }
}

void Append(struct array *a, int n)
{
    if(a->length < a->size)
        a->arr[a->length++] = n;
}

void Insert(struct array *a, int idx, int n)
{
    if(idx>=0 && idx <= a->length && a->length < a->size)
    {
        for(int i = a->length; i>idx; i--)
            a->arr[i] = a->arr[i-1];
        a->arr[idx] = n;
        a->length++;
    }

}

int Delete(struct array *a, int idx)
{
    int i=0;

    if(idx>=0 && idx < a->length)
    {
        i = a->arr[idx];
        for(int i=idx; i<(a->length)-1; i++)
        {
            a->arr[i] = a->arr[i+1];
        }
        a->length--;
    }

    return i;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct array *a, int key)
{
    for(int i=0; i<a->length; i++)
    {
        if(key== a->arr[i])
        {
            if(i!= 0)
            {
                Swap(&a->arr[i], &a->arr[i-1]);
                return i-1;
            }
            else {
                return i;
            }
        }

    }
    return -1;
}

int main()
{
    struct array A = {{1,2,3,4,5},20,5};

    Append(&A, 6);
    printf("deleted element: %d\n", Delete(&A, 2));
    Display(A);
    printf("Index: %d\n", LinearSearch(&A, 1));
    Display(A);

    return 0;
}
