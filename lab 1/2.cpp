#include<iostream>
using namespace std;
int main()
{
    int m,n,o;
    cin>>n;
    o=0;
    if(n==0)
    {
        o=1;
    }
    else
    while(1)
    {
        if(n==0)
            break;
        n=n/10; ++o;
    }
    cout<<o;
}

