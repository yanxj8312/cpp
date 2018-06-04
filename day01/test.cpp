#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, b[100],j;
    long long int n, x, y, z;

    while(cin >> x) {
        int a[100];
        y = 0;
        n = x;
        i = 0;
        while(n != 0) {
            a[i] = n%10;
            i++;
            n = n / 10;
        }
        for( j = 0; j < i; j++ ) 
            y = y + a[j] * pow(10, i - j - 1);
        cout << "y = "<< y << endl;
        z = fabs((x-y)/9.0);
        if(z >= 0 && z < 10)
            cout << "1yes" <<endl;
        else {
            i = z%10;
            n = z;
            while(n != 0 && n%10 == i) {
                n = n / 10;
            }
            if(n == 0)
                cout << "yes"<<endl;
            else
                cout << "NO" << endl;
        }
    }
}
