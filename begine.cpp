#include <iostream>
using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {
    int wallet1 =100;
    int wallet2 = 200;
    
    swapA(wallet1, wallet2);
    swapB(&wallet1, &wallet2);
    swapC(wallet1, wallet2);

   return 0;

}

// 참조를 하지않으면 함수 내부에서만 두 변수의 값이 바뀌고 원본은 그대로 하지만 원본을 참조하면 원본에 함수의 과정이 적용됨,
// 원본 값 변경 여부: 변경됨 (O)
void swapA(int& a, int& b) {
int temp;

temp = a;
a = b;
b = temp;

}
// 원본 값 변경 여부: 변경됨 (O)
void swapB(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    // * (역참조 연산자): 주소 앞에 붙여서 "이 주소에 들어있는 '실제 값'으로 찾아가라"라고 명령합니다
}
// 원본 값 변경 여부: 변경되지 않음 (X)
void swapC(int a, int b) {
    int temp;

    temp = a;
    a=b;
    b = temp;

}