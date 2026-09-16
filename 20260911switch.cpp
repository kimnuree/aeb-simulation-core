 #include <iostream>;
 using namespace std;

 const int SIZE = 30;

 main(){
    cout<< " input\n";
    char line[SIZE];
    cin.get(line,SIZE);
    cout << "input\n";
    int spaces = 0;
    for (int i = 0; line[i] !='\0'; i++) {
        cout << line[i];
        if(line[i] != ' ')
            continue;
            spaces++;
            
    }
    return 0;

 }
