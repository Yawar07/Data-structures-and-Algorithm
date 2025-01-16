#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(){length=breadth=1;}//constructor
    Rectangle(int l ,int b);//constructor
    int area ();//facilitators
    int perimeter();//facilitators
    int getLength(){return length;}//acessor
    void setLength(int l){length = l;}//mutator
    ~Rectangle();//destructor
};

Rectangle :: Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle :: area(){
    return length*breadth;
}

int Rectangle :: perimeter(){
    return 2*(length+breadth);
}

Rectangle :: ~Rectangle(){

}

int main(int argc, char const *argv[])
{
    Rectangle r(10,5);
    cout<<r.area()<<"\n";
    cout<<r.perimeter()<<"\n";
    r.setLength(20);
    cout<<r.getLength()<<"\n";
    return 0;
}
