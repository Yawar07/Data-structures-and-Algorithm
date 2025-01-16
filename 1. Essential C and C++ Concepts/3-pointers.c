#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //Pointers are used for acessing heap memory
    //Pointers are used for acessing resources
    //Used for parameter passing
    int a =16;//data var
    int *p;//address var
    p = &a;
    printf("%d\n",a);
    printf("%d\n",*p);//derefrencing

    int *q;
    q = (int*)malloc(5*sizeof(int));
    //q = new int[5]; in C++
    return 0;
}
