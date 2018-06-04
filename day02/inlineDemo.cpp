#include <iostream>

class A{
    int i;
public:
    A(int i_){i = i_;}  //构造函数定义为内联函数（类声明中直接写代码）
    void print();
};

inline void A::print(){
    std::cout<<"i的值为: "<<i<<std::endl;
}

int main()
{
    A a(3);
    a.print();  //打印
    return 0;
}

