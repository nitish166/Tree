using namespace std;

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
	    int cnt=0;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==0)
	        {
	            cnt++;
	        }
	    }
	    for(int i=0;i<cnt;i++)
	    {
	        cout<<"0"<<" ";
	    }
	    int k=n-cnt;
	    for(int j=0;j<k;j++)
	    {
	        cout<<"1"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
