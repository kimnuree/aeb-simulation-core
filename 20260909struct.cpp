#include <iostream>
#include <cstring> // strlen, strcpy 사용을 위해 필수 추가!

#define SIZE 20
/* 
int main() {
    using namespace std;

    char animal[SIZE];
    char* ps;

    cout << "동물 이름을 입력하세요: ";
    cin >> animal;

    // 입력받은 문자열 길이 + 1(널 문자 '\0' 공간)만큼 동적 할당
    ps = new char[strlen(animal) + 1]; 
    strcpy(ps, animal); // animal의 내용을 ps로 복사

    cout << "동적 할당된 메모리에 복사된 이름: " << ps << endl;

    delete[] ps; // 동적 배열 메모리 해제 (필수)
    return 0;
9008909
    
}

 */

struct Mystruct {
    char name[20];
    int age;
};

int main() 

{
    using namespace std;

    Mystruct* adress = new Mystruct;
   // adress는 Mystruct라는 힙 메모리의 주소이다 로 정의 
    // & (주소 연산자) 생략 가능 여부: 일반 변수는 주소를 가져오려면 &가 필수이지만, 배열의 이름은 그 자체로 첫 번째 칸의 시작 주소를 가리키므로 & 없이 포인터에 대입이 가능하다.
     

 

    cout << "주소값: " << endl;
    cin >> adress->name;
    
    cout << "나이: " << endl;
    cin >> (*adress).age;

    return 0;

}











    

    
    