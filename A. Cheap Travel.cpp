#include<bits/stdc++.h>
using namespace std;
long long int  m,a,b,dp[100000];
long long int  c(long long int  n)
{
    if(n<=0)
    {
        return 0;
    }
    if (n==1&&a<=b)
    {
        return a;
    }
    if (n<=m&&a>=b)
    {
        return b;
    }

    if(dp[n]!=0)
    {
        return dp[n];
    }
    dp[n]=min(c(n-1)+a,c(n-m)+b);
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int  n;
    cin>>n>>m>>a>>b;
    cout<<c(n)<<endl;

}
