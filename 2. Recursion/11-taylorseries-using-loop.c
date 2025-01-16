#include<stdio.h>

double e(int x , int n){
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i = 1; i <= 10; i++)
    {
        num *= x;
        den *= i;
        s += num/den;
    }
    
    return s;
    
}

int main(int argc, char const *argv[])
{
    double result = e(1 , 10);
    printf("%lf",result);
    return 0;
}
