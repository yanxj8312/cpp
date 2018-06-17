#include <iostream>
using namespace std;

class A{
public:
    int print();
};

A::print(){
    cout << "hello world"<<endl;
}

int main()
{
    A a;
    a.print();
    return 0;
}

