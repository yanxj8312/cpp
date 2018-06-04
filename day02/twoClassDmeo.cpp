#include <iostream>
template <class T1, class T2>
T1 max(T1 t1, T2 t2) {
    return static_cast<T1>(t1 > t2 ? t1 : t2);
}

int main()
{
    std::cout<<"max: "<<max(10.9,3)<<std::endl;
    return 0;
}

