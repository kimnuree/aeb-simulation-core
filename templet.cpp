#include <iostream>
using namespace std;

template <class Any>
Any sum(Any,Any);

template <class Any>
Any sum(int, Any);

int main() {

int a = 3;
int b = 4;
cout << sum(a,b) << endl; //두 함수 모두에 해당됨으로 에러 발생

float c = 3.14;
float d = 1.592;
cout << sum(c,d) << endl;

cout << sum (a, c) << endl;


}

template <class Any>
Any sum( Any a, Any b){

    return a+b ;

}

template <class Any>
Any sum( int a, Any b){

    return a+b ;

}