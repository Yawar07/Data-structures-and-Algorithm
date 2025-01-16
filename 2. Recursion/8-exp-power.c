#include<stdio.h>

int power(int m , int n){
    if (n == 0)
    {
        return 1;
    }
    return power(m , n-1)*m;
}

int power2(int m , int n){
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power(m*m ,n/2);
    }else
    {
        return m * power(m*m , (n-1/2))*m;
    }
    
    
}

int main(int argc, char const *argv[])
{
    int result = power(2,9);
    printf("%d\n",result);

    int result2 = power2(2,9);
    printf("%d\n",result);
    
    return 0;
}
