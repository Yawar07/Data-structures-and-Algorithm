#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[5];
    int B[]={1,2,3,4,5};
    int C[10]={2,4,6};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};

    for (int i = 0; i < 5; i++)
    {
        printf("%u \n",&A[i]);//prints the consecutive addresses of the array elements
    }

    int n;
    printf("Enter array size : \n");
    scanf("%d",&n);

    int F[n];

    printf("Enter Array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&F[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Array elements are : %d\n",F[i]);
    }
    
    return 0;
}
