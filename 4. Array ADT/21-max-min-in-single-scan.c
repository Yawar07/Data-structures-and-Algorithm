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

void maxAndMin(struct Array arr){
    int min = arr.A[0];
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if(arr.A[i]<min) min=arr.A[i];
        else if(arr.A[i]>max) max=arr.A[i];
    }
    printf("Max element of Array is : %d\n",max);
    printf("Min element of Array is : %d\n",min);
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    Display(arr);
    maxAndMin(arr);
    return 0;
}