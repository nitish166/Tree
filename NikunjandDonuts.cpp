#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n, greater<int>());
    long int multi=1;
    for(int i=0;i<n;i++)
    {
        multi +=arr[i]*pow(2,i);
        
    }
    cout<<multi<<endl;
    
    return 0;
}
