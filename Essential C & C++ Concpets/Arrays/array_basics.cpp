#include<iostream>
using namespace std;

int main(){
    int A[10] = {2,4,6,8,9,10,22};
                  // int takes 4 bytes
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    // cout<<sizeof(A)<<endl;         // 5 int data * 4 bytes ( each ) = 20 

    // cout<<A[1]<<endl;          // Used in cpp
    // printf("%d\n",A[2]);       // Used in c

    // how to print each int data in an array

    // for(int i=0;i<5;i++){
    //     cout<<A[i];
    // }

    int n;
    cout<<"Enter the size : ";
    cin>>n;
    // int A[n];                // You can't initalize variable size array
    // A[0] = 1;               // run this you will see garbage value

    // remove the comments of the above to run

    for(int x:A){
        cout<<x<<endl;
    }
    
    return 0;
}