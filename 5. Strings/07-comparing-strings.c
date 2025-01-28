#include<stdio.h>
int main(int argc, char const *argv[])
{
    char A[]="George";
    char B[]="George";
    int i,j;
    for (i=0,j=0;A[i]!='\0' && B[i]!='\0'; i++,j++)
    {
        if(A[i] != B[j]) break;
    }
    if(A[i]==B[j]) printf("Equal\n");
    else if(A[i]<B[j]) printf("Smaller\n");
    else printf("Greater\n");
    return 0;
}
