#include <iostream>
#include <typeinfo>
template <class T1, class T2>
class A{
    T1 i;
    T2 j;
public :
    A(T1 t1, T2 t2) { i = t1; j=t2; }//内联函数
    bool comp(){ return i > j; }    //内联函数
    void print_Type();
};

//成员print_Type定义
template <class T1, class T2>
void A<T1, T2>::print_Type() {
    std::cout<<"i的类型是"<<typeid(i).name()<<std::endl;
    std::cout<<"j的类型是"<<typeid(j).name()<<std::endl;
}


int main() {
    A<int, double> a(3,67.8);
    if(a.comp())
        std::cout<<"i > j"<<std::endl;
    else 
        std::cout<<"i <= j"<<std::endl;
    a.print_Type();
    return 0;
}

