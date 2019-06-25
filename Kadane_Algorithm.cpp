using namespace std;


int ContiniousSubArraySum(int arr[],int n)
{
    int cmax,gmax;
    // insilize first element of array
    cmax=arr[0];
    gmax=arr[0];
    for(int i=1;i<n;i++)
    {
       // find the maximum element 
       cmax=max(arr[i],arr[i]+cmax);
       gmax=max(cmax,gmax);
        
    }
    return gmax;
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
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int result=ContiniousSubArraySum(arr,n);
	    cout<<result<<endl;
	}
	return 0;
}
