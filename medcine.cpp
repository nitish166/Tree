#include<iostream>
using namespace std;

int leap(int year)
{
		if(year%400==0 || (year%4==0 && year%100!=0))return true;
		return false;
} 

int main()
{
	int date,month,year,t;
	int days;
	char c;
	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>t;
	while(t--)
	{
		cin>>year>>c>>month>>c>>date;
		if(leap(year)) arr[1]=29;
		else arr[1]=28;
		
		if(arr[month-1]%2!=0)
		{
			days=arr[month-1]-date;	
		}
		else
		{
			days=arr[month-1]-date+arr[month];
		}
		cout<<days/2+1<<endl;
		
	}
	
	return 0;
	
}
