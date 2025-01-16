#include<iostream>

void swapref (int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
};


int main(int argc, char const *argv[])
{
    int a , b;
    a = 10;
    b = 20;
    swapref(a , b);
    printf("%d %d\n",a , b);
    return 0;
}