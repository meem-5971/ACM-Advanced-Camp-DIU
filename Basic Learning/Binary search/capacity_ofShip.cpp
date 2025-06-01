#include <bits/stdc++.h>

int calculateday(vector<int>&weights,int mid){
    int count =1,sum=0;
    for(int i=0;i<weights.size();i++){
        
        if(sum+weights[i]>mid){
            sum=weights[i];
            count++;
        }
        else{
            sum+=weights[i];
        }
    }
    return count;
}


int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int low=*max_element(weights.begin(),weights.end());
    int high=0;
   high=accumulate(weights.begin(), weights.end(), 0);
   int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        int req=calculateday(weights,mid);
        if(req<=d) high=mid-1;
        else low=mid+1;
    }
    return low;
}