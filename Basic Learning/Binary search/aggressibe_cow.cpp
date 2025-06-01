bool possible(vector<int>&stalls,int mid,int k){
    int count=1;
    int n=stalls.size();
    int dis=stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-dis>=mid){
            count++;
            dis=stalls[i];
        }
        
    }
    if(count>=k) return true;
    else return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low =1, high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(stalls,mid,k)) low=mid+1;
        else high=mid-1;
    }
    return high;
}