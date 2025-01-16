#include<stdio.h>
#include<stdlib.h>

int add (int a , int b){
    int c;
    c =  a + b;
    return (c);
};

int main(int argc, char const *argv[])
{
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x,y);
    printf("Sum is %d", z);
    return 0;
}
