#include<stdio.h>

int fib(int n){
    if (n <= 1)
    {
        return n;
    }
    int t0=0, t1=1, s=0;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int result = fib(8);
    printf("%d",result);
    return 0;
}
