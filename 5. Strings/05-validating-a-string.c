#include<stdio.h>

int valid(char* name){
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i]>='a' && name[i]<='z')&&
            !(name[i]>='A' && name[i]<='Z')&&
            !(name[i]>=48  && name[i]<=57))
        {
            return 0;
        }
    }
    return 1;    
}

int main(int argc, char const *argv[])
{
    char* name ="M@d S@as0n : @b0ve";
    if (valid(name)) printf("Valid string\n"); 
    else printf("Invalid string\n");
    return 0;
}
