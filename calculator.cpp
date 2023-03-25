#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    char opr;
    cin >> a >> opr >> b;
    if (opr == '-'){
        cout << a  << '-' <<  b  << '=' << a - b; 
    }
    else if(opr == '+'){
        cout << a  << "+" <<  b  << '=' << a + b;
    }
    else if (opr == '*'){
        cout<< a  << "*" <<  b  << '=' << a * b; 
    }
    else if (opr == '/'){
        if (b == 0){
        cout << a  << "/" <<  b  << "=" << " impossible " << endl;
        }
        else {
        cout << a  << "/" <<  b  << '=' << a / b;
        }
    }
    else {
        cout << "sorry...";
    }
    return 0;
}