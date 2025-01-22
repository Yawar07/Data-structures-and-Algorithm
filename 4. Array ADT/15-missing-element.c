#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display (struct Array arr){
    printf("Elements are : ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n\n");
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

//For finding missing Element in an array of 1st n natural numbers 
int findElement(struct Array arr){
    int sum =0;
    for (int i = 0; i < arr.length-1; i++)
    {
        sum = sum + arr.A[i];
    }
    int S = arr.length*(arr.length+1)/2;
    return S-sum;
}

//For finding missing Element in an array where sequence doesn't start from 1st n natural numbers 
int findElement2(struct Array arr){
    int l=arr.A[0];
    int h=arr.A[arr.length-1];
    int difference = l;
    for (int i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i]-i != difference)
        {
            return i+difference;
        }
        
    }return 0;
}

//For finding multiple missing Elements in sorted array of an sequence of n natural numbers
void findElements(struct Array arr){
    int l=arr.A[0];
    int h=arr.A[arr.length-1];
    int difference = l;
    for (int i = 0; i < arr.length-1; i++)
    {
        if (arr.A[i]-i != difference)
        {
            while (arr.A[i]-i > difference)
            {
                printf("%d ",i+difference);
                difference++;
            }   
        }  
    }
    printf("\n");
}

//Finding multiple missing elements in an unsorted array using hash table
void findElements2(struct Array arr){
    int lowest = Min(arr);
    int highest =Max(arr);
    int* arr2 = (int*)calloc((highest + 1), sizeof(int));
    for (int i = 0; i < arr.length; i++)
    {
        arr2[arr.A[i]]++;
    }
    for (int i = lowest; i <=highest; i++)
    {
        if (arr2[i]==0) printf("%d ",i);   
    }
    printf("\n");
    free(arr2);
}

int main(int argc, char const *argv[])
{
    struct Array arr1 = {{1,2,4,5,6},10,5};
    struct Array arr2 = {{3,4,6,7,8},10,5};
    struct Array arr3 = {{1,2,5,6,7},10,5};
    struct Array arr4 = {{10,22,5,6,1},10,5};
    printf("%d\n",findElement(arr1));
    Display(arr1);
    printf("%d\n",findElement2(arr2));
    Display(arr2);
    findElements(arr3);
    Display(arr3);
    findElements2(arr4);
    Display(arr4);
    return 0;
}
