#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subset_ct=(1<<n);
        vector<vector<int>>subsets;
        for(int mask=0;mask<subset_ct;mask++) {
        vector<int>subset;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
        }
        return subsets;
    }
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 int n;
 cin>>n;
 vector<int>nums(n);
 for(int i=0;i<n;i++){
    cin>>nums[i];
 }
 auto all_subsets=subsets(nums);
 for(auto subset : all_subsets){
    for(auto element : subset){
        cout<<element<<" ";
    }
    cout<<endl;
 }
return 0;
}