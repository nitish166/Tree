#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	string str2;
	int cnt=0;
	cin>>str1;
	cin>>str2;
	for(int i=0;i<str1.length();i++){
		if((int)str1[i]<97){
			str1[i]=(char)(32+(int)str1[i]);
		}
		if((int)str2[i]<97){
			str2[i]=(char)(32+(int)str2[i]);
		}
		if((int)str1[i]<(int)str2[i]){
			cout<<"-1";
			cnt=1;
			break;
		}
		else if((int)str1[i]>(int)str2[i]){
			cout<<"1";
			cnt=1;
			break;
		}
	}
	if(cnt==0){
		cout<<"0";
	}
 
    return 0;
 
}
