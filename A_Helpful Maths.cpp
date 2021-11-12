#include<bits/stdc++.h>
using namespace std ;
int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   int p=s.length()/2;
   for(int i=0;(i<s.length()-p);i++)
   {
    if(i==0)
    {
    cout<<s[p];
    }
    else
    cout<<"+"<<s[p+i];
   }
    cout<<endl;
}
