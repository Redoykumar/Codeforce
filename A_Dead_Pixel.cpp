#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,m,m1,m2;
        cin>>x>>y>>a>>b;
        a++;
        b++;
        m1 =max(x*(b-1),y*(a-1));
        m2 =max(x*(y-b),y*(x-a));
        cout<<max(m1,m2)<<endl;
    }

}
