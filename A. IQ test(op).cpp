#include<bits/stdc++.h>
using namespace std;
int in[2],c[2];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        in[p%2]=i;
        c[p%2]++;
    }
    if(c[0]==1)
    {
        cout<<in[0]+1<<endl;
    }
    else
    {
        cout<<in[1]+1<<endl;
    }
}
