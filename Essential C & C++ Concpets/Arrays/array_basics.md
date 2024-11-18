## Arrays Basics

Array : Collection of Similar Data Elements

```cpp

int A[5];               // A[0][1][2][3][4];
A[0] = 27;              // Store value like this

```
How to Declare an Array

```cpp

int main(){
    int A[5];
    int B[5] = {2,4,6,8,10};

    // to Access and array

    for(int i=0;i<5;i++){
        printf("%d",B[i]);
    }

    // this will print array 
}

```

If you have intialize and array of size 

```cpp

int A[10] = {2,4,6,8,7};

// And you haven't declared the whole 10 data 
// then if you try to print the remaining data 
cout<<A[7]<<A[8];

// it will print ' 0 ' in that case

```
 ' for ' each loop

```cpp

for(int x:A){
    cout<<x<<endl;
}

```

 You can't initialize varibale size array like A[n];