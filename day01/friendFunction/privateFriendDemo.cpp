#include <iostream>
class B;    //事先声明，check函数用到该类
class A{
    bool bfinish;
    friend bool check(A a, B b);    //声明check为类A的友元函数
public :
    A(bool b){bfinish = true;}
};

class B{
    bool bfinish;
    friend bool check(A a, B b);    //声明check为类B的友元函数
public :
    B(bool b){ bfinish = b; }
};

bool check(A a, B b){
    //定义友元函数
    if(a.bfinish && b.bfinish)
        return true;
    else 
        return false;
}

int main()
{
    A a(true);
    B b(false);
    if(check(a,b))
        std::cout<<"bfinish 都是true"<<std::endl;//调用友元函数
    else 
        std::cout<<"bfinish 不都是 true"<<std::endl;
    return 0;
}

