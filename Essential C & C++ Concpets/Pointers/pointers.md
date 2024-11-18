## Pointers

Pointer is a address varible, it is meant to store address of a data
it is used for indirectly accessing data

![](https://github.com/harshalmore31/DSA/blob/main/Essential%20C%20&%20C++%20Concpets/.sources/pointer_diag.jpg?raw=true)

Pointers are used :
- For Accessing Heap memory
- For Accessing Resources
- For Parameter passing

```cpp

    int a = 10;       // data variable
    int *p;           // address variable
    p = &a            // it will store address of a and it also occupies memory ( Initialization )
                      // here p -> a ( it is pointing to address of a )
    cout<<a<<endl;    // - 10   
    cout<<*p<<endl;   // 
    return 0;

```

How to access Heap memory using Pointer

```cpp
#include<stdlib.h>
int main(){
    int *p;

    // How to get store in heap memory

    p = (int *)malloc(5*sizeof(int));     // It is a keyword use to store in Heap Memory  [ In C ]
    p = new int[5];

    return 0;
}

```

