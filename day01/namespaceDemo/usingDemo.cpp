#include <iostream>

namespace Myspace {
    int i = 1;
    int j = 3;
}

int main()
{
    using namespace Myspace;    //使用using指令可以省去命名空间的指定
    i = j+10;
    j = 20;
    std::cout << i << std::endl;
    std::cout<< j << std::endl;
    return 0;
}

