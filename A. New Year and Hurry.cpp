#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,i,x=0;
    cin>>n>>k;
    for( i =1;i<=n;i++)
    {
        ll m =5*i;
        x+=m;

        if(x+k>240)
        {
            break;
        }
    }
    cout<<i-1<<endl;


}
