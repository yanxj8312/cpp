#include <iostream>
namespace NS1{
int a = 1;
}
namespace NS2 {
int a = 8;
}
using namespace std;
int main()
{
    cout << NS1::a<<endl;
    cout<<NS2::a<<endl;
    return 0;
}

