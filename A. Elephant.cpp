#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0;
    cin>>n;
    if(n>=5)
    {
        c+=n/5;
        n-=c*5;
    }
    if(n>=4)
    {
        c+=n/4;
        n-=c*4;
    }
    if(n>=3)
    {
        c+=n/3;
        n-=c*3;
    }
    if(n>=2)
    {
        c+=n/2;
        n-=c*2;
    }
    if(n>=1)
    {
        c+=n/1;
        n-=c*1;
    }
    cout<<c<<endl;

}
