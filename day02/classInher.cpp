#include <iostream>

template <class T>
class A{
public :
    void func(T a){
        std::cout<<"使用func(T a)成员函数模板"<<std::endl;
    }
};

//继承类B
template <class T1, class T2>
class B : public A<T1> {
public :
    void func(T1 t1, T2 t2) {
        std::cout<<"使用func(T1 t1, T2 t2)成员函数模板"<<std::endl;
    }
};

int main()
{
    B<int ,double> b;
    b.func(30,60);
    A<int> a = static_cast<A<int>>(b);
    a.func(10);
    return 0;
}

