#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,p,e;
    cin>>n>>p;
    if(n&1)
    10{
        e=(n/2)+1;
    }
    else
    {
        e=n/2;
    }
    if(p>e)
    {
        cout<<(p-e)*2<<endl;
    }
    else
    {
        cout<<((p-1)*2)+1<<endl;
    }


}
