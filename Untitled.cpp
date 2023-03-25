#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0; 
    for(int i=a; i <= b; i++){
        if(sqrt(i) == int(sqrt (i))){
            cout << i << ' ';
        }
    }
    cout <<endl;
    return 0;

}