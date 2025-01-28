#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Changing Upper case to lower case
    char A[]="PINK FLOYD";
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i]>='A' && A[i]<='Z') A[i]=A[i]+32;//Can also use 97(ASCII value) instead of'a'
    }
    printf("%s\n",A);

    //Changing Lower case to upper case
    char B[]="alice in chains";
    for (int i = 0; B[i] != '\0'; i++)
    {
        if (B[i]>='a' && B[i]<='z') B[i]=B[i]-32;
    }
    printf("%s\n",B);

    //Toggling Case
    char C[]="JoY dIVisiOn";
    for (int i = 0; C[i] != '\0'; i++)
    {
        if (C[i]>='a' && C[i]<='z') C[i]-=32;
        else if(C[i]>='A' && C[i]<='Z') C[i]+=32;
    }
    printf("%s\n",C);
    return 0;
}
