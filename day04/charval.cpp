#include <iostream>



int main()
{
    signed char a;
    char b;
    namespace add = std;
    for(int i = 0; i < 26 ; i++){
        b = 'A' + i;
        a = 'A' + i;
        add::cout << "a = "<<int(a) << " b = "<<int(b)<<add::endl;
    }

    return 0;
}

