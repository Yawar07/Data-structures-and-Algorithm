#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int A[5]={2,4,6,8,10};
    int *p;

    p = (int *)malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {   
        static int j = 3;
        p[i]=j;
        j = j + 2;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",p[i]);
    }
    
    
    return 0;
}
