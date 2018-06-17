#include <iostream>
#include <vector>

int main()
{
    std::vector<int>a(1);
    int c;
    try{
     c = a.at(10);
    } catch (std::out_of_range){
        std::cout<<"range error"<<std::endl;
    }
    std::cout << c <<std::endl;
    return 0;
}

