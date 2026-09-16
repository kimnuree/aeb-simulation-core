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

