#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[10],v[10];
    cin>>s>>v;
    int l,j,i,k,ff;
    l=0;
    while(s[l]!='\0')
        ++l;
    k=0;
    while(v[k]!='\0')
        ++k;
        ff=1;--l;--k;//cout<<l<<")("<<k<<"\n";
    for(i=l;k>=0;k--,i--)
    {
        if(s[i]!=v[k])
        {/*cout<<"-."<<s[i]/*<<"|"<<v[k];*/;  ff=0;  break;}
    }
    cout<<ff;
    return 0;
}
