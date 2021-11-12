#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,A=0,D=0;
    cin>>n;
    char a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='A')
        {
            A++;
        }
        else if(a[i]=='D')
        {
            D++;
        }
    }
    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(A<D)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}
