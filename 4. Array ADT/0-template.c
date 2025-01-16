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


int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    Display(arr);
    return 0;
}
