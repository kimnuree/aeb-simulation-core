

#include <iostream>
using namespace std;

const int SIZE =8;
int sumArr(int*, int n=1);

int main(){

    int arr[SIZE] = {1,2,3,5,6,7,8};
    int sum =  sumArr(arr);

    cout << "함수의 총합은 "<< sum ;
    return 0;


}

int sumArr(int* arr, int n ){
    int total =0;
    for (int i = 0; i<n; i++)
        total+= arr[i];

    return total;
    
}