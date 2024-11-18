## Pointer to a Structure


```cpp

struct Rect{
    int length;
    int breath;
};

int main(){
    struct Rect r = {10,15};
    struct Rect *p = &r;
    return 0;
}