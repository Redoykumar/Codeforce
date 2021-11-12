#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n&1)
    {
        cout<<n-9<<" "<<n-(n-9)<<endl;
    }
    else
    {
      cout<<n-8<<" "<<n-(n-8)<<endl;
    }
}
