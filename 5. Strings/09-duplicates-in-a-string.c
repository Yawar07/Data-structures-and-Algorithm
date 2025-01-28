#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char A[]="YfiBBnidiYngY";
    int H[52]={0};
    for (int i = 0;A[i] != '\0'; i++)
    {
        if(A[i]>='a' && A[i]<='z') H[A[i]-'a']+=1;
        else if(A[i]>='A' && A[i]<='Z') H[A[i]-'A'+ 26]+=1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(H[i]>1) printf("%c appears %d times\n",i+'a',H[i]);
    }
    for (int i = 26; i < 52; i++)
    {
        if(H[i]>1) printf("%c appears %d times\n",i+'A'-26,H[i]);
    }
    return 0;
}
