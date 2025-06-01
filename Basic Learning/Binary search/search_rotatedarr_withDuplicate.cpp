bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    int n=arr.size();
   int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return true;

        //shrink the search space till unique element is found
        if(arr[low]==arr[mid] && arr[high]==arr[mid]){
            low++;
            high--;
            continue;
        }

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
    return 0;
}
