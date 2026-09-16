#include <iostream>
using namespace std;
const int SIZE =8;

int sumArr(int[], int);
main () {
    int arr[SIZE]= {1,2,3,4,5,6,7,8};
    int sum = sumArr(arr,SIZE);
    cout << "함수의 총합은"<<  sum <<endl;


    int arr[SIZE];


    return 0;

}

int sumArr(int arr[], int n)  //int sumArr(int* arr int n)로도 가능 

{
    int total = 0;
    for (int i = 0; i<n; i++)
        total += arr[i];

    return total;

}

// 배열 이름 arr만 적어서 던져주면, 컴퓨터는 아파트 건물 8채 전체를 짊어지고 전달하는 것이 
// 아니라 맨 첫 번째 방인 "101호 주소(&arr[0])"만 딱 적어서 함수로 던져줍니다.


