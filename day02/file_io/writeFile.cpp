#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream wFileStream;
    wFileStream.open("demo.txt",ios::out | ios::app);
    if(!wFileStream) {
        cout<<"打开文件失败"<<endl;
        return 1;
    }
    wFileStream << "apple"<<' '<<"苹果"<<endl;
    wFileStream << "banana"<<' '<<"香蕉"<<endl;
    wFileStream << "grape"<<' '<<"葡萄"<<endl;
    wFileStream.close();
    return 0;
}

