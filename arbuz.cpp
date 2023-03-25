#include <iostream>
using namespace std;

int main(){
    int n,x, mx,mn ;
    cin >> n;
    mx = -30001;
    mn = 30001;
    for (int i = 0; i < n; i ++){
        cin >> x;
        if (x > mx){mx = x;}
        if (x < mn){mn = x;}
    } 
    cout << mn << " "<< mx;
}

