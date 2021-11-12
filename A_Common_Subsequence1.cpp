#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a[1024],p,s=0;
        cin>>n>>m;
        while(n--)
        {
            cin>>p;
            a[p]=-1;
        }
        while(m--)
        {
            cin>>p;
            if(a[p]==-1)
            {
             s=p;
            }
        }
        if(s)
        {
            cout<<"YES"<<endl;
            cou     t<<1<<" "<<s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}
