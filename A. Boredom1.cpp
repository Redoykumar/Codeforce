#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100000];
ll dp[100000];
int main()
{
    ll n,ma=0;
    cin>>n;
    ll m=n;
    while(n--)
    {
        ll p;
        cin>>p;
        a[p]++;
        ma=max(p,n);

    }
    dp[0]=0;
    dp[1]=a[1];
    for(ll i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
    }
    cout<<dp[100000]<<endl;

}
