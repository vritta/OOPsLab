#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"give no. of elements of array-";
    cin>>n;cout<<"\n";
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"\ngive k-\n";
    cin>>i;
    cout<<"\n"<<a[i-1];
}
