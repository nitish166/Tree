#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[4];
	int x,count=0;
	cin>>x;
	for(;x--;)
	{
		cin>>s;
		if(int(s[1])==43)
			count++;
		else
			count--;
	}
	cout<<count;
}
