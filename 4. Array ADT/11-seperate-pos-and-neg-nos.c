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

void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Rearrange(struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while (i<j)
    {
        while (arr->A[i]<0)i++;
        while (arr->A[j]>=0)j--;
        if (i<j)swap(&arr->A[i],&arr->A[j]);   
    } 
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,-3,25,10,-15,-7},10,6};
    Display(arr);
    Rearrange(&arr);
    Display(arr);
    return 0;
}
