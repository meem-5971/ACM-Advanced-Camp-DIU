#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n=arr.size();
   int low=0,high=n-1;
   int ans=INT_MAX;
   int id=-1;
   //the index of minimum element of the rotated sorted array denotes the number of rotation in array
   while(low<=high){
	   int mid=(low+high)/2;

	   if(arr[low]<=arr[mid]){
		   ans=min(ans,arr[low]);
           if(ans==arr[low]) id=low;
		   low=mid+1;
	   }
		else{
			ans=min(ans,arr[mid]);
            if(ans==arr[mid]) id=mid;
			high=mid-1;
		}

   }
   return id;  
}