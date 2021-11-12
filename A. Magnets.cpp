#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,c=1,m=1;
    cin>>n;
    string s[n];
    cin>>s[0];
    for(int i=1;i<n;i++)
    {
        cin>>s[i];
        if(s[i-1]!=s[i])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
