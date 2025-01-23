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

void findDuplicates(struct Array arr){
    for (int i = 0; i < arr.length-1; i++)
    {
        int count =1;
        if (arr.A[i] != -1)
        {
            for (int j = i+1; j < arr.length; j++)
            {
                if (arr.A[i] == arr.A[j])
                {
                    count++;
                    arr.A[j]= -1;
                }
            }
            if(count>1) printf("%d appears % d times\n",arr.A[i],count);
        }
    }
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2,3,3,2,6},10,5};
    
    findDuplicates(arr);
    Display(arr);
    return 0;
}
