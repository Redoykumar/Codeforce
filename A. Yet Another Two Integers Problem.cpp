#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        if(a==b)
        {
            c=0;
        }
        else if(a>b)
        {
            a=a-b;
            if(a>=10)
            {
                c=a/10;
                a=a%10;
                if(a!=0)
                {
                    c++;
                }
            }
            else
            {
                c++;
            }
        }
        else
        {
            b=b-a;
            if(b>=10)
            {
                c=b/10;
                b=b%10;
                if(b!=0)
                {
                    c++;
                }
            }
            else
            {
                c++;
            }
        }
        cout<<c<<endl;
    }

}
