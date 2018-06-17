#include <iostream>
#include <iterator>

using namespace std;
int main()
{
    ostream_iterator<string> oo(cout);
    *oo = "Hello,";
    ++oo;
    *oo = "world\n";
    return 0;
}

