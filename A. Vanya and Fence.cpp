#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,h,c=0;
    cin>>n>>h;
    for(int i=0 ;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<=h)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    cout<<c<<endl;
}
