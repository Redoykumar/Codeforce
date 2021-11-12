#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct node
{
    ll x;
    ll y;


};
bool c(node a,node b)
{
    return a.x<b.x;
}
int main()
{
    ll s,n,f=0;
    cin>>s>>n;

    node a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i].x>>a[i].y;
    }
    sort(a,a+n,c);
    for(int i=0;i<n;i++)
    {

       if(s>a[i].x)
       {
           s+=a[i].y;
       }
       else
       {
           f=1;
           break;
       }
    }
    if(f)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
