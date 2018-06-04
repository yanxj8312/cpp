#include <iostream>

template <class T>
void func(T a) {
    std::cout<<"使用func(T a)模板"<<std::endl;
}

//函数模板重载
template <class T1, class T2>
int func(T1 t1, T2 t2) {
    std::cout<<"使用func(T1 t1,T2 t2)模板"<<std::endl;
    return 1;
}

int main()
{
    func(20,10);
    func(1);
    return 0;
}

