## Structures

If we consider a rectangle 

```cpp

    struct Rectangle{       // Total = 8 bytes
        int length;         // 4 bytes
        int breath;         // 4 bytes
    };

    int main(){
        struct Rectangle r;            // Declaration                    
        
        // now this r will occupy memeory space
        
        struct Rectangle r = {10,5};   // Declaration and Initalization
        r.length = 15;                // Modified length = 15
        r.breath = 10;                // Modfified length = 10
        cout<<"Area of the Rectangle : "<<r.length*r.breath;
        return 0;
    }

``` 

1. Complex Number :

    a + ib 

    ```cpp

    struct Complex{             // memory : [4+4] = 8 bytes
        int real;
        int img;
    };

    ```
2. Student :

    roll number
    name
    dept
    address

    ```cpp

    struct Student{              // memory : [4+25+10+50] = 89 bytes
        int roll;
        char name[25];
        char dept[10];
        char address[50];
    };

    struct Student S;
    s.roll = 10;
    s.name = "John";

    ```

###  Playing Cards
---

face - 1,2..........10,J,Q,K
shapes - 0,1,3,4(club),(spade),(diamond),(heart)
color - 0,1(black),(red)


```cpp
    
    struct card{        // memory : 6 bytes
        int face;
        int shape;
        int color;
    };

    int main(){
        // struct card c;
        // c.face = 1;
        // c.shape = 0;
        // c.color = 0;

        struct card c = {1,0,0};       // declaration + initalization      [ It will be inside stack inside main f(n)]

        struct card deck[52] = {{1,0,0},{2,0,0},{1,1,0}         // memory [52*6] = 312 bytes
                                 {1,1,0},{2,1,0},{1,2,1}};      
        cout<<deck[0].face<<endl;
        cout<<deck[0].shape<<endl;
        return 0;
    }

```
