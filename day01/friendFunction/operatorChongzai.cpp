#include <iostream>
class B;
class A{
    int i;
public :
    A(int i_){ i = i_; }
    friend bool operator>(A& a, B& b);  //声明>操作是类a的友元函数
};

class B{
    double d;
public :
    B(double d_){ d=d_; }
    friend bool operator>(A& a, B& b);  //声明>操作是类b的友元函数
};

bool operator>(A& a, B& b){
    return a.i > b.d;   //比较大小.
}

int main()
{
    A a(19);
    B b(13.2);
    if(a>b)
        std::cout<<"a>b \n"<<std::endl;
    else
        std::cout<<"a<=b \n"<<std::endl;
    return 0;
}

