#include <iostream>
using namespace std;
void helloCPP(int,int);

int maint(){

    int times, times2;
    cout << "정수입력 \n";
    cin >> times;
    cout << "정수릏한번더 입력 \n";
    cin >> times2;
    helloCPP(times, times2);
    return 0;

}

void helloCPP(int n, int m){
    for (int i =0; i <n; i++)
        cout << "hello\n";

    for (int i = 0; i< m; i++)
        cout << "c++\n";
        
}