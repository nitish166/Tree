using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n=str.length();
	    string newString="";
	    newString +=str[0];
	    for(int i=0;i<n-1;i++)
	    {
	       if(str[i]==str[i+1]) 
	       {
	         continue;  
	       }
	       else
	       {
	           newString +=str[i+1];
	       }
	      
	    }
	    
	    cout<<newString<<endl;
	}
	return 0;
}
