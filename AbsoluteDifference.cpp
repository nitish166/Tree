// arr - input array
// n - size of array
#include<bits/stdc++.h>
using namespace std;
int minAbsoluteDiff(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    sort(arr, arr+n);
    
    int diff = INT_MAX;  // initialize difference as infinite
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<diff)
            diff=arr[i+1]-arr[i];
    }
    return diff;
}

