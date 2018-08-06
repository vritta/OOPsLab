#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0;
    while(s[l]!='\0')
        ++l;
    cout<<l;
    return 0;
}
