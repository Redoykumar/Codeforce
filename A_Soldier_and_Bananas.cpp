#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,m,n,s=0;
    cin>>p>>m>>n;
    for(int i=1; i<=n; i++)
    {
        s+=(p*i);
    }
    if(s<m)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<s-m<<endl;
    }

}
