#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,a[51];
int main()
{
    cin>>n;
    cin>>k;
    while(n>i)
{
     cin>>a[i++];
}
while(a[j]&&a[j]>=a[k-1])
{
   j++;
 
}
cout<<j;
    return 0;
}
