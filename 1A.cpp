#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int x;
    x=((m+a-1)/a)*((n+a-1)/a);
    cout<<x;
	return 0;
}
