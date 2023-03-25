//5
#include <iostream>
using namespace std;

int main() {
int a, b, c;

cout << "Enter three numbers: ";
cin >> a >> b >> c;

bool condition = (a > 0 && a <= 20 && a > b && (b > 10 || c == 0));

if (condition) {
cout << "true" << endl;
} else {
cout << "false" << endl;
}

return 0;
}