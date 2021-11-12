#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ma,mi,p,q;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
        {
            ma=a[i];
            p=0;
            mi=a[i];
            q=0;
        }
        else
        {
            if(ma<a[i])
            {
                ma =a[i];
                p=i;
            }
             if(mi>=a[i])
            {
                mi =a[i];
                q=i;
            }
        }

    }
    if(q<p)
    {
      cout<<p+(n-1)-q-1<<endl;
    }
    else
    cout<<p+(n-1)-q<<endl;


}
