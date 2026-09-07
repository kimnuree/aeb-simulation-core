#include <iostream>

using namespace std;

int main() {
    

    int a; 
    { a=3;
    int b =5;}
    a=7;
    int b =3;

    cout << a << b << endl;
    
  
//  cout (Character Output)

// 화면(콘솔)에 글자나 변수 값을 출력해 주는 역할입니다.

// << (데이터의 방향 / 흐름)

// 오른쪽에 있는 데이터를 왼쪽(cout, 즉 화면)으로 흘려보낸다는 뜻의 화살표(방향) 역할입니다.

// a << b (연속 출력)

// 변수 a의 값을 먼저 화면으로 보내고, 곧이어 변수 b의 값을 덧붙여서 화면으로 보냅니다.

// endl (End Line)

// "End Line"의 약자로, 출력을 마친 뒤 줄바꿈(엔터)을 하고 출력 버퍼를 비워주는 기호입니다.


    
}


#include <iostream>
#