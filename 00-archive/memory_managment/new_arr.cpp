#include <iostream>

int main() { 
    //new for arrays, 
    int *arr = new int[5];

    // delete for arrays operator, may only delete first if [] is not used
    delete []arr; 

    int *p1 = new int[3];
    int *p2 = new int[4];

    int **pData = new int *[2];
    pData[0] = p1;
    pData[1] = p2;

    delete []p1; //delete []pData[0]
    delete []p2; //delete []pData[1]
}