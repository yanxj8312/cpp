#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int count (const string&s, char c) {
    int n = 0;
    string::const_iterator i = find(s.begin(), s.end(), c);
    while(i != s.end()) {
        ++n;
        //这里返回的地址是找到的地址
        i = find(i+1,s.end(),c);
    }
    return n;
}


int main()
{
    string str = "ajfljalfjaldjflajkdl";
    int m_count = count(str,'a');
    cout<<m_count<<endl;
    return 0;
}

