#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ReadFileStream;
    ReadFileStream.open("Config.xml",std::ios::in);
    if(!ReadFileStream){
        cout<<"文件打开失败"<<endl;
    }
    return 0;
}

