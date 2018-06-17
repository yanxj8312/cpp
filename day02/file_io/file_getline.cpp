#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream rFileStream;
    rFileStream.open("./demo.txt",ios::in);
    if(!rFileStream){
        cout << "打开文件失败"<< endl;
        return 1;
    }
    char str[30];
    rFileStream.getline(str,30);
    cout << str <<endl;
    rFileStream.close();
    return 0;
}

