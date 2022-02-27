#include <iostream>

using namespace std;

int main()
{
    /*
    2D Arrays can be initialized in three ways, as follows:
    */

    // 1. Completely on stack
    int A1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<"Elements of A1"<<endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            cout<<A1[i][j]<<endl;

    // 2. Partially in heap
    int *A2[3];
    A2[0]= new int[4];
    A2[1]= new int[4];
    A2[2]= new int[4];

    for(int i=0, k=0; i<3; i++)
        for(int j=0; j<4; j++)
            {
                k++;
                A2[i][j] = k;
            }

    cout<<"Elements of A2"<<endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            cout<<A2[i][j]<<endl;

    // 3. Completely on heap

    int **A3;

    A3 = new int*[3];
    A3[0] = new int[4];
    A3[1] = new int[4];
    A3[2] = new int[4];

    for(int i=0, k=0; i<3; i++)
        for(int j=0; j<4; j++)
            {
                k++;
                A3[i][j] = k;
            }


    cout<<"Elements of A3"<<endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            cout<<A3[i][j]<<endl;

    return 0;
}
