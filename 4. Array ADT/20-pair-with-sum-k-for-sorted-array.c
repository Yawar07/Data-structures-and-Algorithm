#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display (struct Array arr){
    printf("\nElement are : ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void findPair(struct Array arr, int k){
    int i=0, j=arr.length-1;
    while (i<j)
    {
        if (arr.A[i] + arr.A[j] == k)
        {
            printf("%d + %d = %d \n",arr.A[i],arr.A[j],k);
            i++;
            j--;
        }
        else if (arr.A[i] + arr.A[j] < k) i++;
        else j--;
    }
    
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    findPair(arr,7);
    Display(arr);
    return 0;
}