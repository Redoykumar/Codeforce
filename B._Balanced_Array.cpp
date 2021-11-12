#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if((a/2)%2==0)
        {
            cout<<"YES"<<endl;
            int s=0;
            for(int i=2;i<=a;i+=2)
            {
                s+=i;
                cout<<i<<" ";
            }
            int s1=0;
             for(int i=1;i<a-1;i+=2)
            {
                s1+=i;
                cout<<i<<" ";
            }


            cout<<s-s1<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
