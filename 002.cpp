#include <iostream>
using namespace std;
inline float square(float x){
    return x*x;

}

int main() {
    int a =5;
    cout << "한 변의 길이가" << a << "인 정사각형의 넒이";

    float b = square(a);
    cout <<b <<endl;

    return 0;
    

}