#include<iostream>
using namespace std;
int main()
{
    int m,n,l,j;
    for(m=32;m<=99;m++)
        {n=m*m;  if(n%10==(n/10)%10&&(n/100)%10==(n/1000)%10)   cout<<n<<"\n";}
    return 0;
}
