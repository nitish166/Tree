#include<iostream>
using namespace std;
int main()
{
	int count=0,sum=0;
	int n,a[3];
	cin>>n;
	while(n--){
		count=0;
	for (int i = 0; i < 3; ++i)
	{
	 cin>>a[i];
	}
	 for (int i = 0; i < 3; ++i)
	 {
	 if(a[i]==1)
	 {
	 	count++;
	 }
     }
 
if(count>1){
	sum++;
}
 
}
cout<<sum<<endl;
return 0;
}
