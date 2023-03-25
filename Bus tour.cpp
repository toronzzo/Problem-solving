#include <iostream>
using namespace std;

int main (){
    int n, x, cnt = 0;
    cin >> n;
    for ( int i = 1; i <= n; i ++){
        cin >> x;
        if (x < 437){ 
            cout << "Crash " << i; 
            break;
        }
        else cnt++;
    }
    if (cnt == n){cout << "No crash";}
}