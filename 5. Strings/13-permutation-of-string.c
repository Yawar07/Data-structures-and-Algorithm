#include<stdio.h>

void swap(char *x , char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void perm(char S[],int l,int h)
{
    if (l==h)
    {
        printf("%s\n",S);
    }
    else
    {
        for (int i=l;i<=h; i++)
        {
            swap(&S[l],&S[i]);
            perm(S,l+1,h);
            swap(&S[l],&S[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    //without use of extra array
    char S[]="ABC";
    perm(S,0,2);
    return 0;
}
