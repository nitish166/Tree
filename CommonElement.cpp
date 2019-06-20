#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,p;
	    cin>>n>>m>>p;
	    int arr1[n],arr2[m],arr3[p];
	    
	    map<int,int> ma;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	        ma[arr1[i]]=1;
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>arr2[i];
	        if(ma[arr2[i]]==1)
	        ma[arr2[i]]++;
	    }
	    for(int i=0;i<p;i++)
	    {
	        cin>>arr3[i];
	        if(ma[arr3[i]]==2)
	        ma[arr3[i]]++;
	    }
	    int flag=0;
	    for(map<int,int>::iterator it=ma.begin();it!=ma.end();it++)
	    {
	        if(it->second>2)
	        {
	            cout<<it->first<<" ";
	            flag=1;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"-1";
	    }
	    cout<<endl;
	}
	return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}                                                                               
