#include<iostream>
#include<string.h>
using namespace std;

int main(){
    printf("Hello World \n");

    // int A[5];
    // A[0] = 1;
    // A[1] = 2;
    // // for(int x:A){
    //         cout<<x<<endl;
    //     }


    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int A[n]={2,4,5,6,7};
        for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++){
        cout<<A[i]<<endl;
    }
    return 0;
}