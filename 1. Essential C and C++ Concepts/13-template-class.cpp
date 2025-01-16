#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
    private:
    T a;
    T b;
    public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T> :: Arithmetic(T a , T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmetic<T> :: add(){
    T c;
    c = a+b;
    return c;
}
template<class T>
T Arithmetic<T> :: sub(){
    T c;
    c = a-b;
    return c;
}

int main(int argc, char const *argv[])
{
    Arithmetic<int> ar(10,5);
    cout<<ar.add()<<"\n";
    Arithmetic<float> br(10.56,5.89);
    cout<<br.add()<<"\n";
    return 0;
}
