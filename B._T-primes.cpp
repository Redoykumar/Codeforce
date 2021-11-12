#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(ll n)
{
    if(n<2)
    {
        return false ;
    }
    if(n==2)
    {
        return true ;
    }
    if(!(n&1))
    {
        return false ;
    }
    for(int i =3;i*i<=n;i+=2)
    {
       if(n%i==0)
       {
        return false ;
       }
    }
    return true;
}
int main()
{
    ll n ;
    cin>>n;
    while(n--)
    {
        ll a,c=1;
        cin>>a;
        ll f=(int)sqrt(a);
        if(a==1)
        {
           cout<<"NO"<<endl;
        }
        else if(f*f==a&&isprime(f))
        {
            cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }



    }

}
