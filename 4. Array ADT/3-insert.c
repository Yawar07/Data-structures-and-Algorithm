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

void Insert(struct Array *arr , int index , int x){
    if (index>=0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    } else
    {
        printf("Invalid Index element can't be added\n");
    }
    
    
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    Insert(&arr , -1 , 10);
    Display(arr);
    return 0;
}
