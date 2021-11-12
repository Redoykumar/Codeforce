#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,m;
    cin>>a>>b>>c;
    m=max((a+b*c),a*(b+c));
    m=max((a*b*c),m);
    m=max(((a+b)*c),m);
    m=max((a+b+c),m);
    cout<<m<<endl;


}

