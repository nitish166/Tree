using namespace std;


int main() {
	//code
	int t, arr[100002];
	cin>>t;
	while(t--)
	{
	    // Input
	    int n;
	    cin>>n;
	    for(int i=0;i<n+2;i++)
	    {
	        cin>>arr[i];
	    }
	    
        for(int j=0;j<n+2;j++)
        {
            if(arr[abs(arr[j])]>0)
            {
               arr[abs(arr[j])]=-arr[abs(arr[j])]; 
            }
            else
            cout<<abs(arr[j])<<" ";
        }
        cout<<endl;
	    
	}
	return 0;
}
