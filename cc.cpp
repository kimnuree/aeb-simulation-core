#include <iostream>
using namespace std;

int func(int);

int main() {
    int (*pf)(int);
    pf = func;
    // 이렇게 하면 함수 포인터를 사용해 함수를 호출할 수 있음
    cout << pf(3) << endl;
    cout << (*pf)(3) << endl;
    return 0;

}

int func(int n){
    return n+1;

}
