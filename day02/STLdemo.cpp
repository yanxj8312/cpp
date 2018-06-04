#include <iostream>

template <class T>
T max(T a, T b){
    return a > b ? a:b;
}

int main(){

    printf("%d\n",max(3,10));
    printf("%f\n",max(16.9,2.8));
    return 0;
}

