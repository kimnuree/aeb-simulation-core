#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct Oppa
    {
        string name;
        string hobby;
        float height;
        int age;
    };

    Oppa A;
    A.name = "Nureeoppa";
    A.hobby = "snacking";
    A.height = 180.5f;
    A.age = 15;

    Oppa B = {"Nureeoppa", "snacking", 180.5f, 15};
    // A, B는 서로 같음

    struct Student
    {
        string name;
        int age;
        float height;
    };

    Student class1[2] = {{"soree", 27, 153.5f}, {"Nuree", 32, 153.5f}};
    // [2]의 의미 : "배열의 총 칸 수(전체 용량)"를 뜻합니다.
    Student class2[1] = {{"Miran", 37, 180.5f}};

    cout << "class1[0] name is " << class1[0].name << endl;

    return 0;
}

//공용체union 와 열거체 enum class)

int main()
{
    //열거체 기호 상수를 만드는 것에 대한 또다른 방법
    enum spectrum {red, orange, yellow, green, blue, indigo, violet};
    /* 
    1. spectrum은 열거체의 이름입니다.
    2. red, orange, yellow, green, blue, indigo, violet은 열거체의 기호 상수입니다.'0,에서부터 7까지 각각 대응하게됨
     0,1,2,3,4,5,6 이렇게됨
    
    */
   spectrum color = red;
   cout << "color is " << color << endl;
   
   return 0;

   enum spectrum {red=1, orange=3, yellow, green, blue, indigo, violet};
  // 이것과 동일함 > enum spectrum {red=1, orange=3, yellow=4, green=5, blue=6, indigo=7, violet=8}; 초기화 하지 않은 열거자들은 그이전 값보다 1씩 증가해서 자동으로 지정됨

  

}

