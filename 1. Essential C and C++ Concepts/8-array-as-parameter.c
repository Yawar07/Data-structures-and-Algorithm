#include<stdio.h>

//instead of A[] we can write *A aswell

void func (int A[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }
    
};

int main(int argc, char const *argv[])
{
    int A[5]={2,4,6,8,10};
    func(A , 5);//Array is passed by using call by address method array cant be passed using call by value
    return 0;
}
