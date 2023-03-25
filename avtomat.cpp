#include <iostream>
using namespace std;

int main()
{
    int m,n,k;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>n>>m;
        cout<<19*m+(n+239)*(n+366)/2<<endl;
    }
}
//d = 19m + (n + 239)*(n + 366) / 2