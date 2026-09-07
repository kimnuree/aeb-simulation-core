
#include <iostream>
#include <string>
using namespace std;

/*
int main()
{
    // c++ 항상 메인함수 필요
    cout << "Hello, World!" << endl;
    // cout 다음 문장을 콘솔에 출력하는 역할을 함
    return 0;


    // endl 는 줄바꿈기
    // << 데이터의 방향 , 흐름 헬로우를 cout으로 보내겠다
/*     exit code: 0 (return 0;) : 아무 문제 없이 실행이 완벽하게 끝났다는 뜻

}

 using namespace std;
 /*  int main()
 {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_longlong = LLONG_MAX;

    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_longlong << endl;

    unsigned int n_uint = -INT_MAX;
    cout << "unsigned int: " << n_uint << endl;
    return 0;


 }


int main() {
int b = 3.14;
cout << b << endl;

}

*/

int main()
{
    // char
    // char b = 'a';
    char b[] = {'a', 'b', 'c', 'd', 'e'};
    cout << b << endl;
    char c[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    /*  char b[] = "ab"; // 자동으로 'a', 'b', '\0'가 들어감 */

    cout << c << endl;

    // bool 0 or 1 : 모든 0 도는 1 로 저장하는데 0이 아닌 모든것은 1로 저장함

    bool a = 1;
    bool e = 0;
    bool f = 2;
    bool d = -1;
    cout << a << e << f << d << endl;

    return 0;
    // null
}
