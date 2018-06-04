#include <iostream>

template <class T>
void func(T a) {
    std::cout << "hello "<<std::endl;
}
//函数模板的完全特化
template<> void func<int>(int a){
    std::cout<<"hello world"<<std::endl;
}

int main()
{
    func(2);
    func('a');
    return 0;
}

