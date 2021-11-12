#include<bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    long long int n,o,e;
    cin>>n;
    if(n&1)
    {
        o=-1*floor( (n+1)/2 );

        cout<<o<<endl;
    }
    else
    {
        e=1*floor( (n+1)/2 );
        cout<<e<<endl;
    }


}
