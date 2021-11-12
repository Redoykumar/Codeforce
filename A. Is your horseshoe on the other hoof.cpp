#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0) ;
   cin.tie(NULL);
   set <ll> s;
    for(int i =0 ;i<4;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }

    cout<<4-s.size()<<endl;

}
