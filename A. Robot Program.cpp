#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
       if(x==y) cout<<x+y<<endl;
       else cout<<2*max(x,y)-1<<endl;

    }

}
