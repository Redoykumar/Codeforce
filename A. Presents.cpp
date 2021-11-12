#include<bits/stdc++.h>
using namespace std;
struct x
{
    int a,b;
};
bool p(x a,x b)
{
    return a.a<b.a;
}
int main()
{
    int n;
    cin>>n;
    x b[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>b[i].a;
        b[i].b=i;
    }
    sort(&b[0],&b[n],p);
     for(int i=0 ;i<n;i++)
    {
        //cout<<b[i].a<<" ";

        cout<<b[i].b+1<<" ";
    }
    cout<<endl;
}
