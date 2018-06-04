#include <iostream>
using namespace std;

void f(void){
    try {
        throw "abc";
    } catch(const char*){
        cout<<"执行f出现const char*异常"<<endl;
        throw;  //连续抛出捕捉到的异常，然后函数返回
    }
    cout<<"f函数打印"<<endl;    //该语句不会被执行
}

int main()
{
    try{
        f();
    } catch(const char*){
        cout<<"执行main出现const char异常"<<endl;
    }
    return 0;
}

