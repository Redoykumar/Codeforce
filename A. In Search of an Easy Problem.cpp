#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    while (n--)
    {
        int p;
        cin>>p;
        if(p==1)
        {
           f=1;
        }
    }
    if(f)
    {
        cout<<"HARD"<<endl;
    }
    else
         cout<<"EASY"<<endl;
}
