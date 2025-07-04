int upperBound(vector<int> &arr, int x, int n){
	
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;

}