#include<stdio.h>

int F[10];

int fib(int n){
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n-2] == -1)
             F[n-2] = fib(n-2);
        if (F[n-1] == -1)
             F[n-1] = fib(n-1);
        F[n] = F[n-2] + F[n-1];     
        return F[n-2] + F[n-1];          
    }
    
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
    int result = fib(8);
    printf("%d\n",result);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n" , F[i]);
    }
    return 0;
}
