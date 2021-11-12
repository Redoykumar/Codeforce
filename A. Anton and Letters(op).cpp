#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set <char> c;
    char s;
    while(cin>>s)
    {
      if(isalpha(s))
        {
            c.insert(s);
        }
        if(s=='}')
        {
            break;
        }
    }

    cout<<c.size()<<endl;

}
