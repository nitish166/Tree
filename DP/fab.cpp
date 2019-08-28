#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n==0|| n==1)
	{
		return 1;
	}
	int output= fib(n-1)+fib(n-2);
	return output;
}


int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}