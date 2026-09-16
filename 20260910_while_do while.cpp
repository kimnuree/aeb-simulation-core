#include <iostream>
#include <string>

using namespace std;

int main()

{
    string str = "oppa";
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i] << endl;

        i++;
    }
    bool b = true;

    while (b)
    {
        cout << "hellow\n";
    }
    bool j = false;
    
    do {
        cout << "who" << endl;

    }while (j);



    
    return 0;
}

// 행렬 만들기 
 


int main() {
int temp[4][5] //4행 5열 

{ {
    {1,2,3,4,5}
    {11,22,33,44,55,}
    {111,222,333,444,555}
    {1111,2222,3333,4444,5555}
};
for (int row = 0; row <4; row++) {
    for ( int col = 0; col < 5; col++){
        cout << temp[row][col] << "";
        }
        cout <<"/n";
        
}



}

return 0;

}






