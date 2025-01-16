#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
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
    int n;
    struct Array arr;
    printf("Enter size of an array : ");
    scanf("%d",&arr.length);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter the no of elements for Array : ");
    scanf("%d",&n);

    printf("Enter all the elements of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    
    Display(arr);
    return 0;
}
