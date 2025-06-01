int search(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return mid;

        //left part sorted
        if(arr[low]<=arr[mid]){
        if(arr[low]<=k && arr[mid]>=k){
            high=mid-1; //exists in left
        }
        else{
            low=mid+1;//exists in right
        }
        }
        //right part sorted
        else{
            if(arr[high]>=k && arr[mid]<=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
