#include<iostream>
using namespace std;
int main()
{
    int m,n,o;
    cin>>n>>m;
    o=n%m;
    if(o==0)
        cout<<n;
    else
    cout<<n+m-o;
    return 0;
}
