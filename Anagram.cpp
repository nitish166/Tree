using namespace std;
#define No_of_count 256

bool CheckAnagram(string str1, string str2)
{
     int count[No_of_count]={0};
     int i;
     // increment the count in the array then after that 
     // decrement it.
     for (i=0;str1[i] && str2[i];i++)
     {
         count[str1[i]]++;
         count[str2[i]]--;
     }
     
     // Here check the length of both the array.
     if(str1[i] || str2[i])
        return false;
     
     // See if there is any non zero in count array.   
     for(int i=0;i<No_of_count;i++)
        if(count[i])
            return false;
            
    return true;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str1,str2;
	    cin>>str1>>str2;
	    
	    bool result=CheckAnagram(str1,str2);
	    if(result==false)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	   
	}
	return 0;
}
