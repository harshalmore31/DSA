#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;               // it must be declared and also initalized its necessary
                              // its like name = rajendra and nickname = Raj that is a & r
    int b = 30;
    r = b;
    cout<<a<<endl;             // as r and a is same person so if r = 30 then a = 30
    cout<<r<<endl;
    return 0;
}