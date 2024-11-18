#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st){
    printf("Enter the size of Stack :");
    scanf("%d",&st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size*sizeof(int));
}