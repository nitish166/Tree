using namespace std;

int main() {
	//code
	int t ;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        arr[i]=x;
	    }
	    
	    
	    int max=arr[0], local_max=-1, global_max=-1;
	    for(int j=1;j<n;j++)
	    {
	        if(arr[j]>max)
	        {
	          local_max=arr[j]-max;
	          if(global_max<local_max)
	          {
	              global_max=local_max;
	          }
	        }
	        else
	        {
	            max=arr[j];
	        }
	    }
	    cout<<global_max<<endl;
	    
	}
	return 0;
}
