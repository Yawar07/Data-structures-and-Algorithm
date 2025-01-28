#include<stdio.h>
int main(int argc, char const *argv[])
{
    char A[]="OAHOOO Nice h";
    int vcount=0, ccount=0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' ||
            A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
        {
            vcount++;
        }
        else if ((A[i]>='a' && A[i]<='z')||(A[i]>='A' && A[i]<='Z'))
        {
            ccount++;
        }
    }
    printf("String is : %s\n",A);
    printf("Total vowels are %d\n",vcount);
    printf("Total consonants are %d\n",ccount);
    return 0;
}
