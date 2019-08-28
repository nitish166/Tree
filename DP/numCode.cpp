#include<bits/stdc++.h>
using namespace std;
int num_code(int * n, int size)
{
	
   if(size==0)
   	return 1;
   if(size==1)
   	return 1;
   int output=num_code(n,size-1);
   if(output[size-2]*10+output[size-1]<=26)
   {
   	output +=num_code(n,size-2);
   }
   return output;
}


// int num_code(int * n, int size,int *arr)
// {
//    if(size==0)
//    	return 1;
//    if(size==1)
//    	return 1;
//    //if work is already done then please don't do it.
//    if(arr[size]>0)
//    	return arr[size];

//    int output=num_code(n,size-1);
//    if(output[size-2]*10+output[size-1]<=26)
//    {
//    	output +=num_code(n,size-2);
//    }
//    arr[size]=output;
//    return output;
// }


// int num_codesi(int * input, int size)
// {
// 	int * output = new int[size+1];
// 	output[0]=1;
// 	output[1]=1;
// 	for(int i=2;i<=size;i++)
// 	{
// 		output[i]=output[i-1];
// 	}
// 	if(output[i-2]*10+output[i-1]<=26)
// 	{
// 		output[i]* =output[i-2];
// 	}
// 	int ans= output[size];
// 	delete [] output;
// 	return ans;
// }



int main()
{
	int n;
	cin>>n;
	int * arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<num_code(arr,n)<<endl;
	return 0;
}