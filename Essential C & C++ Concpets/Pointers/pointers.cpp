#include<iostream>
#include<stdlib.h>               // for using malloc 
using namespace std;


struct Rect{
        int length;
        int breath;
    };


int main(){

    // // Pointer to a variable 

    // int a = 10;
    // int *p;         // declaration of a pointer ( use at time of refrencing or derefrencing)
    // p = &a;         // p is a pointer type variable, it points to the value of the address where its pointing
    // cout<<a<<endl;
    // cout<<*p<<endl;   // pointing to value store at address its pointing
    // cout<<p<<endl;    // address of a is stored at p but *p points the value stored at address a which is pointed by p

    // Pointer to an Array

    // int A[5] = {2,4,6,8,10}; // whenever you declare anything in your program it is going to be created into stack
    // int *p;
    // p = A;            // dont write &A when u are initalizing an pointer with an array

    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }

    // Creating an Array in Heap using C lang

    // int *p;
    // p = (int *)malloc(5*sizeof(int));
    // p[0]=2;
    // p[1]=4;
    // p[2]=6;
    // p[3]=8;
    // p[4]=10;

    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }

    // free(p);

    // Creating an Array in Heap using C++ lang

    // int *p;
    // p = new int[5];      // dynamically allocation in heap memory
    // p[0]=2;
    // p[1]=4;
    // p[2]=6;
    // p[3]=8;
    // p[4]=10;

    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }

    // delete []p;        // whenever you are dynammically allocating memory you must release the memory afterwards

    // Pointers

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rect *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;         // all pointers are taking 8 bytes
    cout<<sizeof(p4)<<endl;         // size of a pointer is independent of its datatype
    cout<<sizeof(p5)<<endl;


    return 0;
}