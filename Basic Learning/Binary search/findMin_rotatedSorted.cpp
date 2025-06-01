int findMin(vector<int>& arr)
{
	 int n=arr.size();
   int low=0,high=n-1;
   int ans=INT_MAX;
   while(low<=high){
	   int mid=(low+high)/2;
        //left part is sorted
	   if(arr[low]<=arr[mid]){
		   ans=min(ans,arr[low]);
		   low=mid+1;//eliminating the sorted left after updating ans
	   }
       //right part is sorted
		else{
			ans=min(ans,arr[mid]);
			high=mid-1; //eliminating the sorted right after updating ans
		}

   }
   return ans;
}