#include<stdio.h>

int fib(int n){
    if (n <= 1)
    {
        return n;
    }
    return fib(n-2) +fib(n-1);
}

int main(int argc, char const *argv[])
{
    int result = fib(8);
    printf("%d",result);
    return 0;
}
