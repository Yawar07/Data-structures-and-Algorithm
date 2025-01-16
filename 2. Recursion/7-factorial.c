#include<stdio.h>

int fact(int n){
    if (n == 0)
    {
        return 1;
    } else
    {
        return fact(n-1) * n;
    }
}

int ifact(int n){
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }
    return p;
}

int fsum(int n){
    return n*(n+1)/2;
}

int main(int argc, char const *argv[])
{
    int result = fact(5);//using recursion
    printf("%d\n",result);

    int iresult = ifact(5);//using loop
    printf("%d\n",iresult);

    int fresult = fsum(5);//using formula
    printf("%d\n",fresult);

    return 0;
}
