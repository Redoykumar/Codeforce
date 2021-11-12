#include<bits/stdc++.h>
using namespace std;
int main()
{
         int j = 0;
     for(int i = 0; i <= 4; i++) {
          if(i%2 == 0)
               ++j;
          else {
               --j;
               continue;
          }
          cout<<j << " ";;
     }

}
