#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream rFileStream;
    rFileStream.open("./demo.txt",ios::in | ios::binary);
    if(!rFileStream){
        cout<<"打开文件失败"<<endl;
        return 1;
    }

    char c;
    while(!rFileStream.eof()) {
        //未到达文件末尾就一直读取
        rFileStream.get(c); //逐个字符读出
        cout << c;//控制台输出字符
    }

    rFileStream.close();
    return 0;
}

