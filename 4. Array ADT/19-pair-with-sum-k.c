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

//Finding a pair of elements with sum = k
void findPair(struct Array arr ,int k){
    for (int i = 0; i < arr.length-1; i++)
    {
        for (int j = i+1; j < arr.length; j++)
        {
            if (arr.A[i]+arr.A[j] == k) printf("%d + %d = %d\n",arr.A[i],arr.A[j],k);
        }
    } 
}

void findPair2(struct Array arr ,int k){
    int max = Max(arr);
    int* hashTable = (int*)calloc(max+1,sizeof(int));
    for (int i = 0; i < arr.length; i++)
    {
        if (hashTable[k-arr.A[i]] != 0)
        {
            printf("%d + %d = %d \n",arr.A[i],k-arr.A[i],k);
        }
        hashTable[arr.A[i]]++;
    }
    free(hashTable);
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    //findPair(arr,7);
    findPair2(arr,6);
    Display(arr);
    return 0;
}
