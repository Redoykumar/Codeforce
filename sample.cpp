#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  x,a,b,c,d;
	cin>>x;
	while(1)
	{
		x++;
		a=x/1000;
		b=(x/100)%10;
		c=(x/10)%10;
		d=x%10;
		cout<<a<<" "<<b<<" "<<c<<" "<<d;
		break;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)break;

	}
	cout<<x<<endl;
	return 0;

}
