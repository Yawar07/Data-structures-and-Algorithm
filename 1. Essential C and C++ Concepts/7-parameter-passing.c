#include<stdio.h>
#include<stdlib.h>

void swapval (int x , int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
};

void swapaddr (int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

int main(int argc, char const *argv[])
{
    int a , b;
    a = 10;
    b = 20;
    swapval(a , b);
    printf("%d %d\n",a , b);
    swapaddr(&a , &b);
    printf("%d %d",a , b);
    return 0;
}
