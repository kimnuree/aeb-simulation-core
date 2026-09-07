#include <iostream>
#include <cstring>

using namespace std;
int main ()
{ 
    const int size = 15; /* 
    int size = 5; 로하면 값을 바꿀수있지만 const는 바꿀수없음 */
 char name1[size];
 char name2[size] = "Nuree";

 cout << "my name is " << name2 << endl;
 cout << "you_"<< endl;
 cin >> name1;
 //동일 cin.get(name1,size); 
 /* 
 사용자가 키보드로 입력한 이름을 name1 배열에 저장합니다. */
 cout <<" my name's bytes is " << sizeof(name1) << endl;
 cout << "my name's length is " << strlen(name1) << endl;
 cout << " your name is started with " << name1[0] << endl;
 name2[3]  = '\0'; 

/*  \\이때 C++의 규칙에 따라 cout은 널 문자 \\0 를 만나는 순간, 뒤에 무슨 글자가 얼마나 남아있든 출력을 즉시 중단
  */
 cout << "my names first 3 letter are " << name2 << endl;

 return 0;

}

int main()
{ 
    char char1[15];
    char char2[15] = "Nuree";

    string str1;
    string str2 ="panda";
    // char1 = char2; // error: cannot assign to an array
    str1 = str2; // ok: string assignment
 
}