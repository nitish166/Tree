#include<bits/stdc++.h>
using namespace std;

// basic recursion solution it will take exponential time.
int fib(int n)
{
	if(n==0|| n==1)
	{
		return 1;
	}
	int output= fib(n-1)+fib(n-2);
	return output;
}

// O(n) solution

int fibc(int n, int * arr)
{
	if(n==0|| n==1)
	{
		return 1;
	}
	// first we initilize the array element is zero
	if(arr[n]>0)
	{
		return arr[n];
	}
	int output = fibc(n-1,arr)+fibc(n-2,arr);

	arr[n]=output;

	return output;
}


// iterative solution 

long long int fibi(int n)
{
	// created n+1 size of array.
	long long int * arr = new long long int[n+1];
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	} 
	long long int output=arr[n];
	// deallocate the size of array
	delete [] arr;
	return output;
}

int main()
{
	int n;
	cin>>n;
	// create array 
	int * arr = new int[n];
	//cout<<fib(n)<<endl;
	cout<<fibc(n, arr)<<endl;
	//cout<<fibi(n)<<endl;
	return 0;
}