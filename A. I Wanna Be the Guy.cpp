#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool a[200];
int main()
{
    ll l,p,c=0,q;
    cin>>l>>p;
    while(p--)
    {
        ll b;
        cin>>b;
        a[b]=true;
        c++;

    }
    cin>>q;
    while(q--)
    {
        ll b;
        cin>>b;
        if(a[b]==false)
        {
            a[b]=true;
            c++;
        }
    }
    if(c==l)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }


}
