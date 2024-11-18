## Reference in C++

It is usefull for parameter passing

```cpp

int main(){
    int a = 10;
    int &r;                // its a refrence here it is declared
    int &r = a;            // now it is initalized, here it means you can call a or r they are the same person
    cout<<a;               // Output : 10
    r++;
    cout<<r;               // Output : 11
    cout<<a;               // Output : 11
    return 0;
}

```
