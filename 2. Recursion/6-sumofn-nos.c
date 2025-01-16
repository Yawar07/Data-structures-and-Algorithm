#include<stdio.h>

int sum(int n){
    if (n == 0)
    {
        return 0;
    } else
    {
        return sum(n-1) + n;
    }
}

int isum(int n){
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int fsum(int n){
    return n*(n+1)/2;
}

int main(int argc, char const *argv[])
{
    int result = sum(5);//using recursion
    printf("%d\n",result);

    int iresult = isum(5);//using loop
    printf("%d\n",iresult);

    int fresult = fsum(5);//using formula
    printf("%d\n",fresult);

    return 0;
}
