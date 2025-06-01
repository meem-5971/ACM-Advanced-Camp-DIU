#include<bits/stdc++.h>
int studentcount(vector<int>&arr,int mid){
    int s=0;
    int count=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(s+arr[i]<=mid){
          
            s+=arr[i];
        }
        else{
            count++;
            s=arr[i];
        }
    }
    return count;
}
int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int std=studentcount(arr,mid);
        if(std>m) low=mid+1;
        else high=mid-1;

    }
    return low;
}