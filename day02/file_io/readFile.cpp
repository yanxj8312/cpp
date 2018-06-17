#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream rFileStream;
    rFileStream.open("./demo.txt",ios::in);
    if(!rFileStream){
        cout<<"打开文件失败"<<endl;
        return 1;
    }
    //读取文件
    char eName[10],cName[10];
    rFileStream >> eName >> cName;
    cout << eName << ' '<< cName << endl; 
    rFileStream >> eName >> cName;
    cout << eName << ' '<< cName << endl; 
    rFileStream >> eName >> cName;
    cout << eName << ' '<< cName << endl; 
    rFileStream.close();
    return 0;
}

