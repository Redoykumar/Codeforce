#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,g1=0,g2=0,g3=0,g4=0;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==4)
        {
            g4++;
        }
        else if(a==3)
        {
            g3++;
        }
        else if(a==2)
        {
            g2++;
        }
        else if(a==1)
        {
            g1++;
        }
    }
    s+=g4;
    if(g3>=g1&&g3!=0&&g1!=0)
    {
        g3=g3-g1;
        s+=g1;
        g1-=g1;

    }
    else if(g3<=g1&&g3!=0&&g1!=0)
    {
        g1=g1-g3;
        s+=g3;
        g3-=g3;

    }
    s+=g3;
    s+=(g2/2);
    g2%=2;


    s+=g1/4;
    g1%=4;
    if(g2==1&&g1==2)
    {
        g2--;
        g1-=2;
        s++;
    }
    if(g2==1&&g1==1)
    {
        g2--;
        g1--;
        s++;
    }
    if(g1>0)
    {
        s++;
    }
    if(g2>0)
    {
        s++;
    }

    cout<<s<<endl;;



}
