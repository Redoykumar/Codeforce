#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int p,q,c=1,ans;
        cin>>p>>q;
        int a[p],b[q];
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<q;j++)
        {
            cin>>b[j];
        }
        for(int i =0 ;i<p;i++)
        {
            for(int j =0;j<q;j++)
            {
                if(a[i]==b[j])
                {

                    if(c==1)
                    {
                       ans=a[i];
                        c=0;
                    }
                    else
                    {
                        if(ans==1)
                        {
                          ans=max(ans,a[i]);
                        }
                        else
                        {
                         ans=min(ans,a[i]);
                        }

                    }



                }
            }
        }
        if(c==0)
        {
             cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
