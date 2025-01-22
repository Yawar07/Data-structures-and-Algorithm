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

void findDuplicates(struct Array arr){
    int size = Max(arr);
    int* arr2 = (int*)malloc((size+1)*sizeof(int));
    for (int i = 0; i <= size; i++)
    {
        arr2[i]=0;
    }
    
    for (int i = 0; i < arr.length; i++)
    {
        arr2[arr.A[i]]++;
    }
    for (int i = 0; i <= size; i++)
    {
        if(arr2[i]>1) printf("%d appears %d times\n",i,arr2[i]);
    }
    free(arr2);  
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{7,7,4,5,5,6,6,6},10,8};
    findDuplicates(arr);
    Display(arr);
    return 0;
}
