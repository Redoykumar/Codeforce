#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
   while(1)
   {
    size_t t=s.find("WUB");
    if(t!=string::npos)
    {
      s.replace(t,3," ");
    }
    else
    {
        break;
    }
   }

    cout<<s<<endl;


}
