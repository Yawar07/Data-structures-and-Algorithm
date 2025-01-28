#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char A[]="ADFDA";
    char B[strlen(A)];
    int i,j=strlen(A)-1;
    for (i=0; A[i]!='\0'; i++,j--)
    {
        B[i]=A[j];
    }
    B[i]='\0';
    
    for (i=0,j=0;A[i]!='\0' && B[i]!='\0'; i++,j++)
    {
        if(A[i] != B[j]) break;
    }
    if(A[i]==B[j]) printf("Given string is a pallindrome\n");
    else printf("Given string is not a pallindrome\n");

    //Method 2 by comparing elements 1st with last 2nd with 2nd last and so on
    char C[]="ADFDA";
    char t;
    int k,l = strlen(C)-1;
    for (int k=0; k<=l;k++,l--)
    {
        if(C[k] != C[l]) {
            printf("Given string is not a pallindrome\n");
            break;
            }
        else if(k==l) printf("Given string is a pallindrome\n");    
    }
    return 0;
}
