#include<bits/stdc++.h>
using namespace std;





int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   bool flag=false;
	   for(int i=0;i<n-2;i++)
	   {
	       unordered_set<long long>s;
	       int curr_sum=x-arr[i];
	       for(int j=i+1;j<n;j++)
	       {
	           if(s.find(curr_sum-arr[j] )!=s.end())
	           {
	               flag=true;
	               cout<<"1";
	               break;
	           }
	           s.insert(arr[j]);
	       }
	       if(flag==true)
	       break;
	   }
	   if(flag==false)
	   cout<<"0";
	   
	   cout<<endl;
	}
	return 0;
}
