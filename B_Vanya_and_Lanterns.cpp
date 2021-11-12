#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int  n,l,p=0,p1=0,d;
    cin>>n>>l;
    long long int  a[n];
    for(long long int  i =0; i<n; i++)
    {
        cin>>a[i];

    }
    sort(&a[0],&a[n]);
    if(a[0]==0)
    {
        p=1;
    }
    if(a[n-1]==l)
    {
        p1=1;
    }
    double md=a[1]-a[0];
    long long int  in1=0,in2=1;
    for(long long int  i =0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>=md)
        {
            md=a[i+1]-a[i];
            in1=i ;
            in2=i+1;
        }
    }
    cout<<setprecision(10)<<fixed;
    if(l==1)
    {
    cout<<1.0000000000<<endl;
    }
    else if(n==1)
    {
    cout<<(double)(max(l-a[0],a[0]))<<endl;
    }

     else if(p1)
    {
        if(a[0]>(md/2))
        {
            double d =a[0];
            cout<<d<<endl;
        }
        else
        {
            cout<<md/2.0<<endl;
        }
    }
    else if(p)
    {
        if(l-a[n-1]>(md/2))
        {
            double d =l-a[n-1];
            cout<<d<<endl;
        }
        else
        {
            cout<<md/2.0<<endl;
        }
    }

    else
    {
        if(a[0]>=l-a[n-1])
        {
            if(a[0]>(md/2))
            {
                double d =a[0];
                cout<<d<<endl;
            }
            else
            {
                cout<<md/2.0<<endl;
            }
        }
        else if(a[0]<=l-a[n-1])
        {
            if(l-a[n-1]>(md/2))
            {
                double d =l-a[n-1];
                cout<<d<<endl;
            }
            else
            {
                cout<<md/2.0<<endl;
            }
        }


    }
}
