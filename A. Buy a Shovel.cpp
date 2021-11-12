#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int c=0;
    for(int i =1; ; i++)
    {   c+=a;
        if(c%10==0||c%10==b)
        {
            cout<<i<<endl;
            break;
        }

    }
}
