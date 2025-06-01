#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int grid[n][m];
int tot=n*m;
map<int,int>mp;
set<int>s;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
        
        mp[grid[i][j]]=1;
    }
}
int sz=s.size();
int ans=0;

for(int i=0;i<n;i++){
    for(int j=1;j<m;j++){
       if(grid[i][j-1]==grid[i][j]){
        mp[grid[i][j]]=2;
       } 
       
    }
}

for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
       if(grid[i-1][j]==grid[i][j]){
        mp[grid[i][j]]=2;
       } 
       
    }
}
int mxfq=0;
for(auto u:mp){
    ans+=u.second;
    mxfq=max(mxfq,u.second);
}
cout<<ans-mxfq<<endl;

}
return 0;
}