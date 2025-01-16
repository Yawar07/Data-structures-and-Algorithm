#include<iostream>
int main(int argc, char const *argv[])
{
    /* int *q;
    q = new int[5]; */
    
    //reference is giving another name to a variable , giving a nickname or alias
    int a=10;
    int &r = a;   //r and a occupy same address
    std :: cout <<r;
    return 0;
}