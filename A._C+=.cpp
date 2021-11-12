#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,a1,b1,n,c=0,c1=0;
        cin>>a>>b>>n;
        a1=a;
        b1=b;

       while(max(a,b)<=n)
        {
           if(a<b)
           a+=b;

           else
            b+=a;

            c++;

        }
        cout<<c<<endl;

    }
}
