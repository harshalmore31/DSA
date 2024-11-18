#include<iostream>
using namespace std;

struct Rect{         // memory [4+4] = 8 bytes  // new = 9 bytes
    int length;
    int breath;
    char x;         // new add = +1 bytes
}r2,r3 ;             // here also you can declare

struct Rect r1;      // you can declare it here also

int main(){
    struct Rect r = {2,4};
    cout<<"Size of a Struct Rect : "<<sizeof(r)<<endl;

    // it is taking 12 bytes instead of 9 bytes
    // it is easy for our machine to read 4_4 bytes as earlier it was taking 4,4 bytes so then it allocates 4 bytes
    // to char and only use 1 byte so 12 bytes
    // later it discard remaning bytes

    // Adjusting of memory : Padding { the above is called padding }

    r.length = 10;          // modified r length

    cout<<"Length : "<<r.length<<endl;
    cout<<"Breadth : "<<r.breath<<endl;

    cout<<"Area of Rectangle : "<<r.length*r.breath;
    return 0;
}