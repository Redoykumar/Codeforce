#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        if(p+2<=q)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
