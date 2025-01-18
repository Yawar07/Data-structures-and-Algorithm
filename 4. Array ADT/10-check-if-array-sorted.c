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

int isSorted(struct Array arr){
    for (int i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i]>arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    printf("%d\n", isSorted(arr));
    Display(arr);
    return 0;
}
