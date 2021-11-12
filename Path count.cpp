#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int pc(int r,int c)
{

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((i==0||j==0)&&!(i==0&&j==0))
            {
                a[i][j]=1;
            }
            else
            {
               a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    return a[r-1][c-1];
}
int main()
{
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter column : ";
    cin>>c;
    cout<<"Output : "<<pc(r,c)<<endl;

}
