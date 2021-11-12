#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
      int s,f=1;
      cin>>s;
      int a[s];
      for(int i=0;i<s;i++)
      {

          cin>>a[i];
      }
      sort(a,a+s);
      for(int i=0;i<s-1;i++)
      {

          if(a[i+1]-a[i]>1)
          {

            f=0;
          }
      }
      if(f)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }


    }
}
