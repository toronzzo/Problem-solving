#include <iostream>
using namespace std;
int main (){
    int sum = 1;
    for (int i =1; i <= 10; i++){
        sum *=i;
    }
    cout << sum;
}