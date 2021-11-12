#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int s=0,c=0;
    while (t--)
    {
        int a;
        cin>>a;
        if (a>0)
        {
            s+=a;
        }
        else if(a<0)
        {
            if(s+a>=0)
            {
                s+=a;
            }
            else
            {
                c+=a;
            }
        }

    }
    cout<<c*-1<<endl;
}
