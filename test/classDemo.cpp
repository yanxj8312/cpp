#include <iostream>
using namespace std;
class A{
public:
    int a;
    int b;
    int c;
    int d;
};

int main()
{
    cout << &A::a <<endl;
    cout << (&A::b) <<endl;
    cout << (&A::c) <<endl;
    cout << (&A::d) <<endl;
    cout << sizeof(&A::a) <<endl;
    return 0;
}

