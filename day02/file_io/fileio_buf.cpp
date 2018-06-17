#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
struct Student{
    char name[10];
    int year;
};

int main()
{
    Student st;
    strcpy(st.name, "宋公明");
    st.year = 18;
    //写入
    ofstream wFileStream;
    wFileStream.open("student",ios::out);
    if(!wFileStream){
        cout << "打开文件失败"<<endl;
        return 1;
    }

    wFileStream.write(reinterpret_cast<char*>(&st), sizeof(Student));
    wFileStream.close();

    //读取
    ifstream rFileStream;
    rFileStream.open("student",ios::in);
    rFileStream.read(reinterpret_cast<char*>(&st),sizeof(Student));
    cout<<st.name<<' '<<st.year<<endl;
    rFileStream.close();


    return 0;
}

