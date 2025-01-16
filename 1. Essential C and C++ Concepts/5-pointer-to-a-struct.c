#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};


int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;

    (*p).length=20;
    p->length=20;//same as above

    struct Rectangle *s;//pointer in stack that will refer to struct that we will create in heap
    s = (struct Rectangle*)malloc(sizeof(struct Rectangle));//creates structure in heap
    p->length=10;
    p->breadth=15;
    return 0;
}
