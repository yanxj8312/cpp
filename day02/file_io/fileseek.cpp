#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream rwFileStream;
    rwFileStream.open("digit",ios::in | ios::out | ios::binary | ios::trunc);

    if(!rwFileStream) {
        cout << "打开文件失败"<<endl;
        return 1;
    }
    for(char i = 0;i < 26; i++) {
        rwFileStream << char('a'+i); //写入26字母
    }
    rwFileStream.seekg(3,ios::beg); //定位到第三个字母处
    char c;
    rwFileStream.get(c);
    cout<< c<<endl; //打印出字符d
    rwFileStream.close();
    return 0;
}

