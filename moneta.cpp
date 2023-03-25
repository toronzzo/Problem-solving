#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n; 
    int cnt = 0, cnt2 = 0;

    for (int i =0; i < n; i++){
        cin >> k;
        if ( k== 0){
            cnt ++;
        }
        else cnt2 ++;
    }
    if (cnt >= cnt2){
        cout << cnt2;
    }
    else cout << cnt;

    return 0;
}