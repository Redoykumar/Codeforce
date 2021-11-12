#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
int minCost(int r,int c)
{
    for(int i =0; i<r; i++)
    {
        for(int j=1; j<c; j++)
        {
            if(i ==0)
            {
                a[i][j]=a[i][j-1]+ a[i][j];
            }
            else
            {

                a[i][j]=min(a[i-1][j],a[i][j-1])+a[i][j];
            }
        }
    }
    int i=r-1,j=c-1;
    string s="";
    s=to_string(i)+" "+to_string(j)+" "+s;
    while(j!=0)
    {
        if(i==0)
        {

            j--;
           s=to_string(i)+" "+to_string(j)+" -> "+s;

        }
        else
        {
            if(a[i-1][j]<=a[i][j-1])
            {

                i--;
                s=to_string(i)+" "+to_string(j)+" -> "+s;
            }
            else if(a[i-1][j]>=a[i][j-1])
            {

                j--;
                s=to_string(i)+" "+to_string(j)+" -> "+s;
            }
        }

    }
    cout<<s<<endl;

    return a[r-1][c-1];
}

int main()
{
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter Column : ";
    cin>>c;
    cout<<"Enter Matrix value : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Our Original Matrix "<<endl;
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Minimum cost : "<<minCost(r,c)<<endl<<endl;
    cout<<"After find Minimum cost our Matrix "<<endl;
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}
