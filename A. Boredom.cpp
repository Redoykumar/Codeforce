#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100000] ={0};
ll dp[100000];
ll b(ll n)
{


    if(n==0) return 0;
    if(n==1) return a[n];
    if(dp[n]!=0) return dp[n];
    return  dp[n]=max(b(n-1),b(n-2)+a[n]*n);
}
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        ll n,m=0;
        cin>>n;

        for(int i =0;i<n;i++)
        {
            ll x;
            cin>>x;
            m=max(m,x);
            a[x]++;
        }
        cout<<b(m)<<endl;
}
