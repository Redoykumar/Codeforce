#include<bits/stdc++.h>
using namespace std ;
int ab(int n )
{
    if(n<0)
    {
    return -1*n;
    }
    else
    return n;

}
int main()
{
    int n ;
   for(int i =1;i<=5;i++)
   {
    for(int j=1;j<=5;j++)
    {
        cin>>n;
        if(n==1)
        {
        cout<<(ab(3-i)+ab(3-j))<<endl;
        }
    }

   }
}

