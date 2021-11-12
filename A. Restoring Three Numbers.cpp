#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool x(ll n,ll m )
{
    return n>m;
}
int main()
{
    ll a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4,x);
    ll p=a[0]-a[1];
    ll q=a[0]-a[2];
    ll r=a[0]-a[3];

    cout<<p<<" "<<q<<" "<<r<<endl;



}

