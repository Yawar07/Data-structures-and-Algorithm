#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Character
    char temp;
    temp='A';
    printf("%c ",temp); //prints the character
    printf("%d \n",temp); //prints the ASCII value
    //Character Array
    char A[2];
    A[0]='a';
    A[1]='b';

    char B[5]={'h','e','l','l','o'};
    char C[]={'h','e','l','l','o','o','o'};
    char D[6]={65,66,67,68,69,70}; //storing ASCII values
    char E[5]={'A','B'}; // E=|A|B|0|0|0|

    //String => adding '\0' at the end of a character array makes a string
    char name[10]={'J','o','h','n','\0'};
    char name2[]={'P','a','u','l','\0'};
    char name3[]="George"; //using "" '\0' is automatically added
    char* name4="Ringo"; //created in heap

    printf("%s\n",name);
    printf("%s\n",name2);
    printf("%s\n",name3);
    printf("%s\n",name4);
    return 0;
}
