#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		ans=ans+i;
	}
	return ans;
}
int32_t main(int)
{
	/* code */
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}