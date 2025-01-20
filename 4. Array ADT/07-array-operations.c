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

int Get(struct Array arr , int index){
    if (index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr , int index ,int x){
    if (index>=0 && index<arr->length)
        arr->A[index]=x;
}

int Max(struct Array arr){
    int max =arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]>max)
        {
            max=arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min =arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]<min)
        {
            min=arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total+=arr.A[i];
    }
    return total;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n",Get(arr,0));
    Set(&arr,0,1);
    printf("%d\n",Get(arr,0));
    printf("%d\n",Max(arr));
    printf("%d\n",Min(arr));
    printf("%d\n",Sum(arr));
    printf("%f\n",Avg(arr));
    return 0;
}
