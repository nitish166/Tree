int L[1001], R[1001];
int merge(int input[],int si,int mid,int ei)
{
    int i,j,k;
    int n1=mid-si+1;
    int n2=ei-mid;
    
    for(int i=0;i<n1;i++)
    {
        L[i]=input[si+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=input[mid+1+j];
    }
    i=0;j=0;k=si;
    
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            input[k]=L[i];
            i++;
        }
        else
        {
            input[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        input[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        input[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int input[], int si, int ei)
{
//     if(si>=ei)
//     {
//         return;
//     }
    
    //int mid=si+(ei-si)/2;
    if(si<ei)
    {
      int mid=(si+ei)/2;
    
    mergeSort(input,si,mid);
    mergeSort(input,mid+1,ei);
    merge(input,si,mid,ei);  
    }
    
}

void mergeSort(int input[], int size){
	// Write your code here
    //int len = *(&input + 1) - input; 
   // int arr_size = sizeof(input)/sizeof(input[0]);
   // cout<<len<<endl;
    mergeSort(input,0,size-1);
    
        
}

