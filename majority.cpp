#include<bits/stdc++.h>
using namespace std;

void FindMajority(int arr[],int n)
{
   unordered_map<int,int> m;
   int i=0;
   for(i=0;i<n;i++)
   {
       m[arr[i]]++;
   }
   int count=0;
   for(auto i:m)
   {
       if(i.second>n/2)
       {
           cout<<i.first<<endl;
           count=1;
           break;
       }
   }
   if(count==0)
   {
       cout<<"-1"<<endl;
   }
   
}




int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    FindMajority(arr,n);
	    
	}
	return 0;
}
