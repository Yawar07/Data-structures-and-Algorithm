#include<stdio.h>
#include<stdlib.h>

int *fun (int n){
    int *P;
    P = (int *) malloc(n * sizeof(int));
    return (P);
};

int main(int argc, char const *argv[])
{
    int *A;
    A = fun(5);
    for (int i = 1; i <= 5; i++)
    {
        A[i]=i*2;
        printf("%d",A[i]);
    }
    
    return 0;
}
