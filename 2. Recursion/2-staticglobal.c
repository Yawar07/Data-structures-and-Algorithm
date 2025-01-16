#include<stdio.h>
int a= 5;//global variable
int fun(int n )
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n-1) + x; 
    }
    return 0;
}

int main(int argc, char const *argv[]){
    int r = 3;
    r=fun(5);
    printf("%d",r);
    return 0;
}
