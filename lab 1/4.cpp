#include<iostream>
using namespace std;
long long fact(long long);
int main()
{
    long long int m,n,o;
    cin>>n;
    m=fact(n);
    cout<<m;
    return 0;
}
long long fact(long long m)
{
    if(m==1)
        return 1;
    else
        {m=m*fact(m-1);return m;}

}
