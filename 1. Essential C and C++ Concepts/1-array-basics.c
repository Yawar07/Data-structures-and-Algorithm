#include<stdio.h>
int main(int argc, char const *argv[])//function is stored in code section of main memory
{
    int A[5];//Array is stored in stack section of main memory
    A[0]=16;
    A[1]=44;
    A[2]=55;
    int B[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",B[i]);
    }
    
    return 0;
}
