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

int BinarySearch(struct Array arr , int key){
    int l,mid,h;
    l =0;
    h = arr.length;

    while (l <= h)
    {
        mid=(l+h)/2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

int RBinarySearch(int a[],int l, int h,int key){
    int mid;
    if (l<=h)
    {
        mid=(l+h)/2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key<a[mid])
        {
            return RBinarySearch(a, l ,mid-1 ,key);
        }
        else
        {
            return RBinarySearch(a, mid +1 , h , key);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,4,5,6},10,5};
    
    printf("%d\n",BinarySearch(arr, 5));
    printf("%d\n",RBinarySearch(arr.A,0,arr.length,6));
    Display(arr);
    return 0;
}
