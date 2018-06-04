#include <iostream>
namespace NS1 {
    int a = 1;
}
namespace NS2 {
    int a = 8;
}

int main()
{
    using namespace NS1;
    using namespace NS2;
    std::cout << "a的值为"<<a<<std::endl;   
    //两个命名空间中都有a，无法通过编译，因为不知道是哪个a
    return 0;
}

