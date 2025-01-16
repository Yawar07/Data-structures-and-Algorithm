#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

struct Test
{
    int A[5];
    int n;
};


int area (struct Rectangle r1){//for call by reference instead of r1 we write &r1
    return r1.length * r1.breadth;
};

void changeLength(struct Rectangle *p , int l){
    p->length = 20;
}

void fun (struct Test t1){
    t1.A[0] = 10;
    t1.A[1] = 16;
};

int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,15};
    printf("%d\n", area(r));

    struct Rectangle s = {10,15};
    changeLength(&s , 20);
    printf("%d",s.length);

    struct Test t ={{2,4,6,7,10},5};
    fun(t);
    //we can pass structure by value even if it has an array
    return 0;
}
