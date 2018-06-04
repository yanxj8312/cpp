#include <iostream>
class A{
    static int i;
    static int j;
    int k;
public :
    A(int k_){k = k_;}
    static void setj(int j_);
    static void print_static();
    void print();
};

int A::i = 10;  //直接定义静态成员变量

int A::j;   //必须先定义，在使用静态成员函数初始化
void A::setj(int j_) {
    j = j_;
}

void A::print_static(){
    std::cout<<"静态成员变量i和j值为"<<i<<"和"<<j<<std::endl;
}

void A::print(){
    std::cout<<"成员变量k的值为"<<k<<std::endl;
}


int main()
{
    A::setj(20);
    A a(3);
    A::print_static();
    a.print_static();
    a.print();
    return 0;
}

