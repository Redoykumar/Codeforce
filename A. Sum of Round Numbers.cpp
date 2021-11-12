#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=1,c=0;
        string s="";
        cin>>n;
        while(n>0)
        {
            x*=10;
            ll p =n%x;
            n-=p;
           if(p!=0)
           {
               c++;
               s+=to_string(p);
               s+=" ";
           }

        }
        cout<<c<<endl;
        cout<<s<<endl;
    }

}
