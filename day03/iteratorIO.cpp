#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    string from, to;
    cin >> from >> to;  //获取源文件和目标文件

    ifstream is(from.c_str());  //输入流
    istream_iterator<string> ii(is);    //输入流迭代器
    istream_iterator<string> eos;       //输入流哨兵

    vector<string> b(ii, eos);      //b用输入进行初始化
    sort(b.begin(),b.end());        //对缓冲区排序
    ofstream os(to.c_str());    //输出流
    ostream_iterator<string> oo(os,"\n");   //流的输出到迭代器
    unique_copy(b.begin(),b.end(),oo);
    return !is.eof() || !os;
    return 0;
}

