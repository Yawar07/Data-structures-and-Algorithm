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

void Reverse(struct Array *arr){
    int *B;
    B=(int *)malloc(arr->length*sizeof(int));
    for (int i=arr->length-1 ,j =0 ; i >= 0; i-- , j++)
    {
        B[j]=arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i]=B[i]; 
    }
    free(B);
}

void Reverse2(struct Array *arr){
    for (int i=0, j=arr->length-1; i < j ; i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

void leftShift(struct Array *arr){
    for (int i = 1; i < arr->length; i++)
    {
        arr->A[i-1]=arr->A[i];
    }
    arr->A[arr->length-1]=0;  
}

void leftRotate(struct Array *arr){
    int a =arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        arr->A[i-1]=arr->A[i];
    }
    arr->A[arr->length-1]=a;  
}

void leftRotateNTimes(struct Array *arr , int n){
    for (int i = 0; i < n; i++)
    {
        leftRotate(arr);
    }  
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    Display(arr);
    leftRotateNTimes(&arr,2);
    Display(arr);
    return 0;
}
