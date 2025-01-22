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

void findingDuplicates(struct Array arr){
    int lastDuplicate = 0;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]==arr.A[i+1] && arr.A[i]!=lastDuplicate)
        {
            printf("%d\n",arr.A[i]);
            lastDuplicate=arr.A[i];
        }   
    }   
}

void findingDuplicatesCount(struct Array arr){
    int j=0;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i]==arr.A[i+1])
        {
            j = i + 1;
            while (arr.A[i]==arr.A[j]) j++;
            printf("%d is appearing %d times\n",arr.A[i],j-i);
            i = j-1;
        }   
    }  
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{3,3,3,5,5},10,5};
    
    Display(arr);
    findingDuplicates(arr);
    findingDuplicatesCount(arr);
    
    return 0;
}
