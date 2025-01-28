#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    //Reversing using another string
    char A[]="ABCDE";
    char B[strlen(A)];
    int i,j=strlen(A)-1;
    for (i=0; A[i]!='\0'; i++,j--)
    {
        B[i]=A[j];
    }
    B[i]='\0';
    printf("%s\n",A);
    printf("%s\n",B);

    //Reversing without using another string
    char C[]="12345";
    char t;
    int l = strlen(C)-1;
    for (int i=0; i<l;i++,l--)
    {
        t = C[i];
        C[i]=C[l];
        C[l]=t;
    }
    printf("%s",C);
    return 0;
}
