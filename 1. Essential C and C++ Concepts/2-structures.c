#include<stdio.h>

struct Rectangle//definition//stack
    {
        int length;
        int breadth;
    };

int main(int argc, char const *argv[])
{
    struct Rectangle rr;//declaration
    struct Rectangle r ={10,5};//initialisation
    r.length=15;//acessing a member
    r.breadth=10;
    printf("Area of Rectanglr r is %d \n",r.length*r.breadth);

    //struct Rectangle shapes[5];//creates array of structures
    struct Rectangle shapes[3]={{2,2},{3,3},{4,4}};
    printf("%d",shapes[1].length*shapes[1].breadth);
    return 0;
}
