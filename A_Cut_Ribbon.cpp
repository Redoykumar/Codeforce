#include<iostream>
using namespace std;
int a,b,c,arr[40000];
bool f[40000];

int num(int n)
{

    int r=0;
    if(n==0)
    {
        return 1;
    }


    if(arr[n]!=-1)
    {
        return arr[n];
    }

    if(a<=n)
    {
        int p=num(n-a);
        if(p==0)
        {
            r=max(r,p);
        }
        else
        {
            r=max(r,p+1);
        }

    }

    if(b<=n)
    {
        int p=num(n-b);
        if(p==0)
        {
            r=max(r,p);
        }
        else
        {
            r=max(r,p+1);
        }
    }

    if(c<=n)
    {
        int p=num(n-c);
        if(p==0)
        {
            r=max(r,p);
        }
        else
        {
            r=max(r,p+1);
        }
    }

    if((n<min(a,min(b,c))))
    {
        return 0;

    }


    arr[n]=r;
    return arr[n];

}
int main()
{
    int n;
    cin>>n>>a>>b>>c;
    for(int i=0; i<=n; i++)
    {
        arr[i]=-1;
    }
    cout<<num(n)-1<<endl;



}
