#include <iostream>;
using namespace std;


const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main() {
    int a;
    cout << "one num"<< endl;
    cin>>a;
    cheers(a);
    
    int b;
    cout <<"반지름 길이 "<<endl;
    cin >> b;


    float c = circle(b);
    cout <<"원의 넓이는" << c << "입니다"<<endl;


    return b,c;





}

void cheers(int n){
    for(int i = 0; i<n; i++) {
        cout << "cheer" <<endl;

    }
}

float circle(int x){
    return x *x* PIE;

}