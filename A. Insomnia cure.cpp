#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll k,l,m,n,d,p,s1=0;
    cin>>k>>l>>m>>n>>d;
    ll a[d+1];
    p=min(k,min(l,min(m,n)));
    if(p==1)
    {
        cout<<d<<endl;
    }
    else
    {
        for(ll i =1; i<=d; i++)
        {
            if(i%k==0||i%l==0||i%m==0||i%n==0)
            {
                s1++;
            }
        }
        cout<<s1<<endl;
    }


}
