#include <iostream>
template <class T>
class A{
    T i;
public:
    A(T t){ i = t; }
    T compute() { return i*i; }
};

//类A的完全特化
template<> class A<int>{
    int i;
    int k;  //添加新的成员
public:
    A(int t){ i = t; std::cout<<"hello"<<std::endl; }   //添加打印
    int compute(){ return i*i*i; }  //改为立方计算
    void f() {} //添加新成员函数
};

int main(){
    A<double> dObj(2.5);
    A<int> iObj(5);
    std::cout<<dObj.compute()<<std::endl;
    std::cout<<iObj.compute()<<std::endl;
    return 0;
}

