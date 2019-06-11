
void swap( int* a, int* b )
{
    int temp= *a;
    *a=*b;
    *b=temp;
}


int partation(int input[], int si, int ei)
{
    int pivot = input[ei];    
    int i = (si - 1);  
    int j=si;
    for ( j = si; j <= ei- 1; j++) 
    { 
        
        if (input[j] <= pivot) 
        { 
            i++;    
            swap(&input[i], &input[j]); 
        } 
    } 
    swap(&input[i + 1], &input[ei]); 
    return (i+1);
}



void quickSort(int input[], int si, int ei)
{
    if(si<ei)
    {
        int c=partation(input,si,ei);
        quickSort(input,si,c-1);
        quickSort(input,c+1,ei);
    }
}



void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort(input,0,size-1);

}

