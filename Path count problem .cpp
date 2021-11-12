#include<bits/stdc++.h>
using namespace std ;
#define ll long long
ll ar[10000][10000];
ll pathcount(ll p,ll q)
{

    if (p<=1||q<=1)
    {
        return 1;
    }
    else if(ar[p][q]!=0)
    {
        return ar[p][q];
    }
    ar[p][q]=pathcount(p-1,q)+pathcount(p,q-1);
    return ar[p][q];

}
int  main()
{
    ll row,column,test ;
    cout<<"Enter number of test case : ";
    cin>>test;
    while(test--)
    {
        cout<<"Row : ";
        cin>>row;
        cout<<"Column : ";
        cin>>column;
        cout<<"Total path : "<<pathcount(row,column)<<endl<<endl;;
    }

}
